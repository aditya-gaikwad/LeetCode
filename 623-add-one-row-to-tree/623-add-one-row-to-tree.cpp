/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* node, int d, int v, int depth)
    {
        if(!node) return;
        if(d<depth-1)
        {
            helper(node->left, d+1, v, depth);
            helper(node->right, d+1, v, depth);
        }
        else
        {
            TreeNode* t = node;
            TreeNode* a = new TreeNode(v);
            a->left = t->left;
            TreeNode* b = new TreeNode(v);
            b->right = t->right;
            t->left = a;
            t->right = b;
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* nn = new TreeNode(val);
            nn->left = root;
            return nn;
        }
        helper(root, 1, val, depth);
        return root;
    }
};