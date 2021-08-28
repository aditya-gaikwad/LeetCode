class Solution {
public:
    void combinations(int n, int k, vector<int> temp, vector<vector<int>> &res, int var)
    {
        if(k==temp.size())
        {
            res.push_back(temp);
        }
        for(int i=var; i<=n; i++)
        {
            temp.push_back(i);
            combinations(n, k, temp, res, i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        if(n==1)
            return {{1}};
        vector<vector<int>> res;
        vector<int> temp;
        combinations(n,k,temp, res, 1);
        return res;
        
    }
};