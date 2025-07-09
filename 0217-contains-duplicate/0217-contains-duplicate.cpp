class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> unique(nums.begin(), nums.end());

        if(unique.size()==nums.size()){
            return false;
        }
 return true;
    }
   
};