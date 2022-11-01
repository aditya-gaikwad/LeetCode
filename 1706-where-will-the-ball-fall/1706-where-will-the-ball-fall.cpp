class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        // idea - from observation, if adjacent cell not in same direction
        // will lead to "stuck"
        int m = grid.size(), n = grid[0].size();
        vector<int> res(n);
        // simulate - for each position, and simluate the "dropping down"
        for (int i = 0; i < n; i++) {
            int cur = i;
            for (int j = 0; j < m; j++) {
                int next = cur + grid[j][cur];
                // if hit the wall or adjacent not in same direction
                if (next < 0 || next >= n || grid[j][cur] != grid[j][next]) {
                    cur = -1;
                    break;
                } 
                // update for next level
                cur = next;
            }
            res[i] = cur;
        }
        return res;
    }
};