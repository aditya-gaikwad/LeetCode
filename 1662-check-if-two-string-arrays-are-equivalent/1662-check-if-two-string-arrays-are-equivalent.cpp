class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        std::string str1;
        std::string str2;

        for(string &s:word1) str1.append(s);

        for(string &s:word2) str2.append(s);

        if(str1.compare(str2) != 0) return false;

        return true;
    }
};