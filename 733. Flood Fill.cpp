class Solution {
public: 
    
    void dfs(int i, int j, vector<vector<int>>& image, int newc, int n, int m, int pre)
    {
        if(i<0 || i>=n || j<0 || j>=m || image[i][j] == newc || image[i][j] != pre)
            return;
        image[i][j] = newc;
        dfs(i, j+1, image, newc, n, m, pre);
        dfs(i+1, j, image, newc, n, m, pre);
        dfs(i-1, j, image, newc, n, m, pre);
        dfs(i, j-1, image, newc, n, m, pre);
        return;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newc)         {
        int n = image.size();
        int m = image[0].size();
        dfs(sr, sc, image, newc, n, m, image[sr][sc]);
        return image;
    }
    
};