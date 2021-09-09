class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        //row = 0
        for(int col = 0;col < n; col++)
        {
            sortMat(mat, 0, col, m, n);
        }
        
        //col = 0
        for(int row = 1; row < m; row++)
        {
            sortMat(mat, row, 0, m, n);
        }
        
        return mat;
    }
    
    void sortMat(vector<vector<int>>& mat, int row, int col, int m, int n)
    {
        vector<int> values;
        int r = row;
        int c = col;
        while(r<m && c<n)
        {
            values.push_back(mat[r][c]);
            r++;
            c++;
        }
        sort(values.begin(), values.end());
        r = row;
        c = col;
        int ind = 0;
        while(r<m && c<n)
        {
            mat[r][c] = values.at(ind++);
            r++;
            c++;
        }
        
    }
};