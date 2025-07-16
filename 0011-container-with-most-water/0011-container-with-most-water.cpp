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
            /*🔹 Condition: while (lp < rp)
➡️ Why do we loop while lp < rp?

Because:

You’re starting with the widest possible container: left end and right end.

Then, you’re trying to narrow the width but possibly find taller lines to increase the area.

Once lp == rp, it means both pointers are on the same line, and a container can't be formed — width would be zero.

So, we loop as long as there are at least two lines to form a container.*/

            // here width=right_index−left_index
            // so we are getting the width from the index
            int width = rp-lp;
            int ht= min(height[lp], height[rp]);
            int area= width*ht;
            maxWater= max(maxWater, area);

            (height[lp]<height[rp])? lp++ : rp--;
        } 
        return maxWater;

    }
};
