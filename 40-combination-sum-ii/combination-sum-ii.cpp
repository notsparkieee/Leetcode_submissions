class Solution {
    void rec(int i,int sum_left,int target,int n,vector<int>&curr,vector<vector<int>>&ans,vector<int>&candidates){
        if(sum_left<0) return;
        if(i==n){
            if(sum_left==0){
                ans.push_back(curr);

            }
            return;
        }
        {
            curr.push_back(candidates[i]);
            rec(i+1,sum_left-candidates[i],target,n,curr,ans,candidates);
            curr.pop_back();
        }
        {
            int next = i+1;
            while(next<n && candidates[i]==candidates[next]) next++;
            rec(next,sum_left,target,n,curr,ans,candidates);
        }
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>curr;
        rec(0,target,target,n,curr,ans,candidates);
        return ans;

    }
};