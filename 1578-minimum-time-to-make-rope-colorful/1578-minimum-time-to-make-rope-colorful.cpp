class Solution {
public:
    int minCost(string s, vector<int>& time) {
        int res = 0;
        for(int i=1;i<s.size();i++)
        if(s[i]==s[i-1])
        {
            res += min(time[i], time[i-1]);
            time[i] = max(time[i], time[i-1]);
        }
        return res;
    }
    
};