class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        stack<int> st;
        vector<int> nge(nums.size());
        vector<int> ans;
        st.push(nums.size() - 1);
        nge[nums.size() - 1] = nums.size();
        
        for(int i = nums.size() - 2; i >= 0; i--)
        {
            //-,a,+
            while(st.size() > 0 && nums[i] >= nums[st.top()])
            {
                st.pop();
            }
            
            if(st.size() == 0)
            {
                nge[i] = nums.size();
            }
            else
            {
                nge[i] = st.top();
            }
            st.push(i);
        }
        
        int j = 0;
        for(int i = 0; i <= nums.size() - k; i++)
        {
            if(j < i)
            {
                j = i;
            }
            while(nge[j] < i + k)
            {
                j = nge[j];
            }
            ans.push_back(nums[j]);
        }
        return ans;
    }
};
