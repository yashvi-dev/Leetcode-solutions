class Solution {
public:

    void getallsubset(vector<int>& num,vector<int>& ans , int i , vector<vector<int>>& allsubset){
        if(i==num.size()){
            allsubset.push_back({ans});
            return ;
        }
    // inclusion
        ans.push_back(num[i]);
        getallsubset(num ,ans, i+1, allsubset);
    // exclusion
        ans.pop_back();
        getallsubset(num ,ans, i+1, allsubset);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubset ;
        vector<int> arr;
        getallsubset(nums,arr, 0 , allsubset );
        return allsubset;
    }
};