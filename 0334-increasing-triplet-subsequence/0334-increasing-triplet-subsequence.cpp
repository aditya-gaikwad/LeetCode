class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i=0,first=INT_MAX,second=INT_MAX;
        for(i=0;i<nums.size();i++)
        {
           if(nums[i]<first)
           {
               first = nums[i];
           }
            else if(nums[i]<second && first<nums[i])
            {
                second = nums[i];
            }
            
            else if(second< nums[i])
            {
                return true;
            }
        }
        
        return false;
    }
};