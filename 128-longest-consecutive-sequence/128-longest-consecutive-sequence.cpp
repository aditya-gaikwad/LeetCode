class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool>mp;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]] = false;
        }
        int maxLength = 1;
        for(auto it : mp)
        {
            int len = 1;
            int num = it.first;
            mp[num] = true;
            int low_num = num-1,high_num=num+1;
            while(mp.count(low_num) > 0 && mp[low_num] == false)
            {
                len++;
                mp[low_num] = true;
                low_num--;
            }
            while(mp.count(high_num) > 0 && mp[high_num] == false)
            {
                len++;
                mp[high_num] = true;
                high_num++;
            }
            maxLength = max(maxLength, len);
        }
        return maxLength;
    }
};