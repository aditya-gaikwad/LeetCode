class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        vector<int> a;
        
        for(int i=0;i<nums.size();i++)
        {
            a.push_back(nums[i]);
        }
        
        sort(nums.begin(),nums.end());
        
        int x = nums.size();
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            x= x-1;
            mp[nums[i]]= x;
        }
        
        for(int i=0;i<nums.size();i++){
            nums[i]= mp[a[i]];
        }
        return nums;
    }
};