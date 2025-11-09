class Solution {
    void rec(int i,int sum_left,vector<int>&candidates,vector<int>&curr,vector<vector<int>>&ans){
           if(sum_left < 0) return; 
        if(i==candidates.size()){
            if(sum_left==0){
                ans.push_back(curr);
            }
            return;
        }
        {
            curr.push_back(candidates[i]);
            rec(i,sum_left-candidates[i],candidates,curr,ans);
            curr.pop_back();
        }
        rec(i+1,sum_left,candidates,curr,ans);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>curr;
        vector<vector<int>>ans;
        rec(0,target,candidates,curr,ans);
        return ans;
    }
};