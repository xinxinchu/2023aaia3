class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0; i<n-2; i++)
        {
            if(nums[n-1-i] < nums[n-2-i] + nums[n-3-i])
            {
                return nums[n-1-i] + nums[n-2-i] + nums[n-3-i];
            }
        }
        return 0;
    }
};
