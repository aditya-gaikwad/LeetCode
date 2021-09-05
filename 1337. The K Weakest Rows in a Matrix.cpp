class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size(); 
        int n=mat[0].size();
        
        vector<int> ans(k,0);
        
        vector<pair<int, int>> tmp;   // pair -> <cnt, index>
        
        for(int i=0; i<m; i++)
        {
            int cnt=0;
            for(int j=0; j<n; j++)
                if(mat[i][j]==1)
                    cnt++;
            
            tmp.push_back(make_pair(cnt, i));
        }
        
        sort(tmp.begin(), tmp.end());
        
        for(int i=0; i<k; i++)
            ans[i]=tmp[i].second;
        
        return ans;
    }
};