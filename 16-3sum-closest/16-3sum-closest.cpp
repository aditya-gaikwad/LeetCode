class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = 0;
        int mindiff = INT_MAX;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2;i++)
        {
            int j=i+1, k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum) < mindiff)
                {
                    mindiff = abs(target-sum);
                    res = sum;
                }
                if(sum>target)
                    k--;
                else
                    j++;
            }
        }
        return res;
    }
};