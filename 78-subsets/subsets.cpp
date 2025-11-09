class Solution {
    void rec(int i,vector<int>&nums,vector<int>&curr,vector<vector<int>>&ans,int n){
        if(i==n){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        rec(i+1,nums,curr,ans,n);
        curr.pop_back();
        rec(i+1,nums,curr,ans,n);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>curr;
        rec(0,nums,curr,ans,n);
        return ans;
    }
};