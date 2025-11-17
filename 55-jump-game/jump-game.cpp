class Solution {
    int dp[10005];
    bool rec(int i,vector<int>&nums){
        int n = nums.size();
        if(i>=n){
            return 0;
        }
        if(i==n-1){
            return 1;
        }
        if(dp[i]!=-1) return dp[i];
        int count = 0;
        for(int j=1;j<=nums[i];j++){
            if(rec(i+j,nums)){
                return dp[i] = 1;
            }
        }
        return dp[i]=false;
        

    }
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
                memset(dp,-1,sizeof(dp));

        bool cnt = rec(0,nums);
        return cnt;

        
    }
};