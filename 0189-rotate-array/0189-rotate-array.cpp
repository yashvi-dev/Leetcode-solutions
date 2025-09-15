class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // cretaing a vector to avoid overinding things
        int n= nums.size();
        vector<int> temp(n);

        for(int i=0;i<n;i++){
            temp[(i+k)%n]= nums[i];
        }

        // copying the vector to nums 
        nums= temp;
    }
};