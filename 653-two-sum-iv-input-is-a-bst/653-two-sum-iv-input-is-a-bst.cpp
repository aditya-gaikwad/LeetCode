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
    void inorder(TreeNode* node, vector<int>& nums) {
        if (!node) 
            return;
        inorder(node->left, nums);
        nums.push_back(node->val);
        inorder(node->right, nums);
    }

    bool helper(vector<int> &nums, int k) {
        for (int i = 0, j = nums.size() - 1; i < j;) {
            int sum = nums[i] + nums[j];
            if (sum == k) {
                return true;
            }
            else if (sum < k) {
                i++;
            }
            else {
                j--;
            }
        }
        return false;
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        inorder(root, nums);
        return helper(nums, k);
    }
};