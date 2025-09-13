class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long,int> prefixCount;
        // base case: a prefix sum of 0 exists once (for subarrays starting at index 0)
        prefixCount[0] = 1;

        long long prefix = 0;
        int count = 0;

        for (int x : nums) {
            // update running prefix sum
            prefix += x;

            // if there's an earlier prefix equal to prefix - k, 
            // every occurrence of that earlier prefix yields a subarray summing to k ending here
            if (prefixCount.count(prefix - k)) {
                count += prefixCount[prefix - k];
            }

            // record current prefix for future indices
            prefixCount[prefix]++;
        }

        return count;
    }
};
