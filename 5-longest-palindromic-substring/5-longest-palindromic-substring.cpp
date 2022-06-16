class Solution {
public:
    string longestPalindrome(string A) {
        int n  =A.size();
        bool dp[n][n];
        int res_i, res_j;
        for(int g=0;g<n;g++)
        {
            int j;
            for(int i=0,j=g;j<n;i++,j++)
            {
                if(g==0){
                    dp[i][j]=true;
                }
                else if(g==1)
                {
                    if(A[i]==A[j])
                        dp[i][j]=true;
                    else
                        dp[i][j]=false;
                }else{
                    if(A[i]==A[j] && dp[i+1][j-1]==true)
                        dp[i][j]=true;
                    else
                        dp[i][j]=false;
                }
                if(dp[i][j])
                {
                    res_i=i;
                    res_j=j;
                }
            }
        }
        return A.substr(res_i, res_j-res_i+1); 
    }
};