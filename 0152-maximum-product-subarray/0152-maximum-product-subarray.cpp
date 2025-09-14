class Solution {
public:
    int maxProduct(vector<int>& nums) {

        // not corretc approch would work in additoion but not product edge case[-3,-1,-1]
        // int currentP=1;
        // int maxp=INT_MIN;
        // for(int i=0;i<n;i++){
        //     currentP*=nums[i];
        //     maxp=max(currentP, maxp);
        //     if(currentP<0){
        //         currentP=1;
        //     }
        // }
        // return maxp;

        int n=nums.size();
        int minp=nums[0];
        int maxp=nums[0];
        int ans=nums[0];

        for(int i=1;i<n;i++){
            if(n==0)return 0;
            
            if(nums[i]<0) swap(maxp, minp);

            maxp=max(nums[i], maxp*nums[i]);
            minp=min(nums[i], minp*nums[i]);

            ans= max(ans, maxp);
        }
        return ans;

    }
};