class Solution {
   public int[] twoSum(int[] nums, int target) {
    for (int i = 0; i < nums.length; i++) {
        for (int j = i + 1; j < nums.length; j++) {
            if (nums[i] + nums[j] == target) {
                return new int[]{i, j}; 
            }
        }
    }
    return new int[]{};
}
   // this is brute force approch tc--> o(n^2)
   // but there is one more way that is hash map approach gives -> o(n) time complexity 
//    import java. util.*;

// public int[] twoSum(int[] nums, int target) {
//     Map<Integer, Integer> map = new HashMap<>();  // Stores (value -> index)

//     for (int i = 0; i < nums.length; i++) {
//         int complement = target - nums[i];  // Calculate required complement

//         if (map.containsKey(complement)) {  // If complement exists in map
//             return new int[]{map.get(complement), i};  // Return stored index & current index
//         }

//         map.put(nums[i], i);  // Store current value and its index in the map
//     }
    
//     return new int[]{};  // No solution found (should not happen in valid input)
}


}
