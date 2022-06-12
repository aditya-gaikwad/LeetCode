class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;
        int res = 0;
        for(int i=0,j=0,win=0;j<nums.size();j++)
        {
            while(st.find(nums[j]) != st.end())
            {
                st.erase(nums[i]);
                win -= nums[i];
                i++;
            }
            st.insert(nums[j]);
            win += nums[j];
            res = max(res, win);
        }
        return res;
    }
};