class Solution {
    void rec(int i,vector<int>&nums,int n,vector<int>&curr,vector<vector<int>>&ans){
        if(i==n){
            ans.push_back(curr);
            return;
        }
        {
            curr.push_back(nums[i]);
            rec(i+1,nums,n,curr,ans);
            curr.pop_back();
        }
        {
            int next = i+1;
            while(next<n && nums[next]==nums[i]) next++;
            rec(next,nums,n,curr,ans);
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>curr;
        vector<vector<int>>ans;
        rec(0,nums,n,curr,ans);
        return ans;
    }
};