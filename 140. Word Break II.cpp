class Solution {
public:
    void solve(int i,string s, vector<string> &wordDict,vector<string> &ans,string ansstring)
	{
		if(i >= s.length())
		{   
			if(ansstring.length() != 0)
			{
				ansstring.erase(ansstring.length()-1 );
			}
			ans.push_back(ansstring);
			return;
		}

		int j =i;

		while(j < s.length())
		{
			if(find(wordDict.begin(), wordDict.end(), s.substr(i,j-i+1)) != wordDict.end())
			{   
				solve(j+1,s,wordDict,ans,ansstring + s.substr(i,j-i+1) + " ");
			}
			j++;
		}

		if(find(wordDict.begin(), wordDict.end(), s.substr(i)) == wordDict.end())
		{
			return;

		}
	}

    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        
        vector<string> ans;
        string ansstring ="";

        solve(0,s,wordDict,ans,ansstring);
        return ans;
    }
};