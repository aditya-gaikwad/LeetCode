//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> dis={{0,-1},{-1,0},{0,1},{1,0}};
    
    bool isValid(int x,int y,int m,int n){
        return x>=0 and y>=0 and x<m and y<n;
    }
    
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        int m = grid.size(), n = grid[0].size();
        queue<pair<int, int>> q;
        q.push(source);
        grid[source.first][source.second] = 0;
        int k=0;
        while(q.size())
        {
            int len = q.size();
            while(len--)
            {
                pair<int, int> pair = q.front(); q.pop();
                if(pair == destination) 
                    return k;
                auto i = pair.first, j=pair.second;
                for(auto &it : dis)
                {
                    auto x = i+it[0];
                    auto y = j+it[1];
                    if(isValid(x,y,m,n) && grid[x][y])
                    {
                        q.push({x,y});
                        grid[x][y]=0;
                    }
                }
            }
            k++;
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends