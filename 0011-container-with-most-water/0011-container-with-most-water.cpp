class Solution {
public:
    int maxArea(vector<int>& height) {
    //    -----THIS IS BRUTE FORCE APPROACH WITH O(n^2)-QUADRATIC TC ----
        // int maxWater=0;

        // for(int i=0;i<height.size();i++){
        //     for(int j=i+1;j<height.size();j++){
        //         int width= j-i;
        //         int ht= min(height[i], height[j]);
        //         int area = width*ht;
        //         maxWater= max(maxWater, area);
        //     }
        // }

        // return maxWater;

        // ---OPTIMUM SOLUTION WITH O(n)-LINEAR TC------
        int maxWater=0;
        int lp=0;
        int rp=height.size()-1;

        while(lp<rp){
            int width = rp-lp;
            int ht= min(height[lp], height[rp]);
            int area= width*ht;
            maxWater= max(maxWater, area);

            (height[lp]<height[rp])? lp++ : rp--;
        } 
        return maxWater;

    }
};