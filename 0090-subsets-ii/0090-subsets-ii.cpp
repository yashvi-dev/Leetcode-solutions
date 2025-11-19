#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void getallsubset(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsubset){
        // base case
        if (i == (int)nums.size()) {
            allsubset.push_back(ans);
            return;
        }

        // inclusion: take nums[i]
        ans.push_back(nums[i]);
        getallsubset(nums, ans, i + 1, allsubset);
        ans.pop_back();

        // exclusion: skip all duplicates of nums[i] and recurse once
        int idx = i + 1;
        while (idx < (int)nums.size() && nums[idx] == nums[i]) {
            idx++;
        }
        getallsubset(nums, ans, idx, allsubset);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allsubset;
        vector<int> ans;
        getallsubset(nums, ans, 0, allsubset);
        return allsubset;
    }
};
