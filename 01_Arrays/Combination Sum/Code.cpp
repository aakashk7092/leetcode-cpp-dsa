class Solution {
public:
    set<vector<int>>st;
    void solve(vector<int>&arr,vector<vector<int>>&result,vector<int>&comb,int idx,int target){
        if (target < 0 || idx >= arr.size()) return;
        if(target == 0){
            if(st.find(comb)==st.end())
                result.push_back(comb);
                st.insert(comb);
            return;
        }
        comb.push_back(arr[idx]);
        solve(arr,result,comb,idx+1,target-arr[idx]);
        solve(arr,result,comb,idx,target-arr[idx]);
        comb.pop_back();
        solve(arr,result,comb,idx+1,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>comb;
        solve(candidates,result,comb,0,target);
        return result;
    }
};
