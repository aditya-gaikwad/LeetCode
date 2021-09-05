class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i = 0; i<mat.size();i++)
        {
            for(int j =0; j< mat[0].size(); j++)
            {
                if(i == j)
                {
                    sum = sum + mat[i][j];
                }
                else
                    continue;
            }
        }
        
        int k = mat[0].size();
        
        for(int i=0, j = k-1; i<mat.size();i++, j--)
        {
            sum += mat[i][j];
        }
        
        if((k % 2) != 0)
            sum -= mat[k/2][k/2];
        return sum;
    }
};