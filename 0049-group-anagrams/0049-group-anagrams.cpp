class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& string_list) {
        map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(auto it : string_list)
        {
            string temp = it;
            sort(it.begin(), it.end());
            mp[it].push_back(temp);
        }
        for(auto j : mp)
        {
            ans.push_back(j.second);
        }
        return ans;
    }
};