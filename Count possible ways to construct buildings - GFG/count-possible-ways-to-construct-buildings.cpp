// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
// 	long recur(int N, bool prevB)
// 	{
// 	    if(N==0) return 1;
// 	    if(prevB) 
// 	        return recur(N-1, false);
// 	    return (recur(N-1, true) + recur(N-1, false))%mod;
	    
// 	}
	int TotalWays(int N)
	{
	    // Code here
	    long mod = 1e9 + 7;
	    long dp[N+1][2] = {1}; // only 1 combination when N==0 (base case lete he initialization ke time agar assign karna hi he to)
	    for(int i=1;i<=N;i++)
	    {
	        for(int j=0;j<2;j++)
	        {
	            //j represents if there was building in prev plot or not , j==1 - > there is a building else space
                if(j) 
                    dp[i][j] = dp[i-1][0];
                else
                    dp[i][j] = (dp[i-1][0] + dp[i-1][1])%mod;
	        }
	    }
	    long ans = (dp[N][0] + dp[N][1]);
	    ans = (ans * ans)%mod;
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends