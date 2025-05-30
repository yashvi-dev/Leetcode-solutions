class Solution {
    public boolean containsDuplicate(int[] nums) {

    // TIME COMPLEXITY OF O(N^2)
    //     for(int i=0;i<nums.length;i++){
    //        for(int j=i+1;j<nums.length;j++){
    //         if(nums[i]==nums[j]){
    //             return true;
    //         }
    //        }
    //     }
    //     return false;
    // }\

    // HASHING USE -> O(N)
    HashSet<Integer> seed =new HashSet<>();
    for(int i: nums){
        if(seed.contains(i)){
            return true;
        }
        seed.add(i);
    }
    return false;
}
}
    
