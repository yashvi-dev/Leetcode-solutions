class Solution {
public:
    set<vector<int>> storage;
    void getcombi(vector<int>& candidates, int i, vector<int>&combi, vector<vector<int>> &  ans, int target){
        // base case ->
        if(i==candidates.size() || target<0){
            return ;
        }
        if (target==0){
            
            if(storage.find(combi)==storage.end()){
            ans.push_back(combi);
            storage.insert(combi);
            return ;
        }
        }
        
        

        combi.push_back(candidates[i]);
        // f wnat it just include single time
        getcombi(candidates, i+1, combi, ans, target-candidates[i]);
        // multi include 
        getcombi(candidates, i, combi, ans, target- candidates[i]);
        // backtracking step as if just dont wan tto include that elemnt then we need to  exclude the prev includeed elemnt 
        combi.pop_back();
        // exclude the choice 
        getcombi(candidates, i+1 , combi, ans, target);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combi;
        vector<vector<int>> ans;

        getcombi(candidates, 0 , combi ,ans, target);

        return ans; 

    };
};