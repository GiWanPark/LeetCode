class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int sum = nums[0];
        for (size_t i = 1; i < nums.size(); ++i)
        {
            if (nums[i] >= nums[i] + sum)
            {
                sum = nums[i];
            }
            else if (nums[i] + sum >= nums[i])
            {
                sum = nums[i] + sum;
            }

            if (sum > maxSum)
                maxSum = sum;
        }
        return maxSum;
    }
};