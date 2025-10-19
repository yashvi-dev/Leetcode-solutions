class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        // array must be sorted for two-pointer method
        sort(nums.begin(), nums.end());

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
            //    +1 becoz it is considering index from 1 to n 
                return {left+1, right+1};
            }
            else if (sum > target) {
                right--;   
            }
            else {
                left++;   
            }
        }

        return {};  // return empty vector if no pair found
    }
};
