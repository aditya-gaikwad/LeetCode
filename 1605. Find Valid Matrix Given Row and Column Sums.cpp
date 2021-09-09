class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        
        int m = rowSum.size();
        int n = colSum.size();
        
        vector<vector<int>> ans(m, vector<int> (n,0));
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(rowSum[i] < colSum[j])
                {
                    ans[i][j] = rowSum[i];
                    colSum[j] -= rowSum[i];
                    rowSum[i] = 0;
                    break;
                }
                else if(rowSum[i] > colSum[j])
                {
                    ans[i][j] = colSum[j];
                    rowSum[i] -= colSum[j];
                    colSum[j] = 0;
                }
                else
                {
                    ans[i][j] = colSum[j];
                    colSum[j] = 0;
                    rowSum[i] = 0;
                    break;
                }
            }
        }
        return ans;
    }
};