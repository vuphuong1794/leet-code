class Solution {
public:
    void solve(vector<int>& nums, int& target, int i, int sum, int& count) {
        if (i >= nums.size()) {
            if (sum == target) {
                count++;
                return;
            }
            return;
        }

        solve(nums, target, i + 1, sum + nums[i], count);
        solve(nums, target, i + 1, sum - nums[i], count);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int i = 0, sum = 0, count = 0;
        solve(nums, target, i, sum, count);
        return count;
    }
};
