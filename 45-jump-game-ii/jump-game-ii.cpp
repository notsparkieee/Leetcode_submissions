class Solution {
    int dp[11006];
    int rec(int i,vector<int>&nums){
        int n = nums.size();
        if(dp[i]!=-1) return dp[i];
        if(i==n-1) return 0;
        if(i>n-1) return 1e9;
        int mini = 1e9;
        for(int j=1;j<=nums[i];j++){
            mini = min(mini,1+rec(i+j,nums));
        }
        return dp[i]=mini;

    }
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        memset(dp,-1,sizeof(dp));
        return rec(0,nums);

    }
};