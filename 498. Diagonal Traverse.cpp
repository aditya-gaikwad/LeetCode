class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    
        int m = mat.size();
        int n = mat[0].size();
        vector<int> res;
      
        map<int, vector<int>> mp;
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                mp[(i+j)].push_back(mat[i][j]);
            }
        }
        
        int f = 0;
        
        for(auto it : mp)
        {
            if(f % 2 == 0)
            {
                reverse((it.second).begin(), (it.second).end());
            }
            for(int i = 0; i < (it.second).size(); i++)
            {
                res.push_back((it.second)[i]);
            }
            f++;
        }
       
        return res;
    }
};