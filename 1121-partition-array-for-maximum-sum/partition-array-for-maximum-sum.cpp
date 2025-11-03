class Solution {
    int rec(int i, vector<int>& arr, int k, vector<int>& dp) {
        int n = arr.size();
        if (i == n) return 0;
        if (dp[i] != -1) return dp[i];

        int maxVal = 0;
        int best = 0;

        for (int len = 1; len <= k && i+len <= n; len++) {
            maxVal = max(maxVal, arr[i+len-1]);
            int sum = maxVal * len + rec(i+len, arr, k, dp);
            best = max(best, sum);
        }
        return dp[i] = best;
    }
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n, -1);
        return rec(0, arr, k, dp);
    }
};
