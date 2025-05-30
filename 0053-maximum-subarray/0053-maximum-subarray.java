class Solution {
    public int maxSubArray(int[] nums) {

        // BRUTE FORCE APPROACH------
    //    int maxSum=Integer.MIN_VALUE;
    //    for(int st=0;st<nums.length;st++){
    //     int currentSum=0;
    //     for(int end=st; end<nums.length;end++){
    //         currentSum+= nums[end];
    //         maxSum= Math.max(currentSum, maxSum)
    //     }
    //    }

        // KADANE'S ALGORITHM
        int cs=0;
        int maxSum=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
             cs=cs+nums[i];
            maxSum= Math.max(cs, maxSum);
            if(cs<0){
                cs=0;
            }
        }
        return maxSum;
    }
}