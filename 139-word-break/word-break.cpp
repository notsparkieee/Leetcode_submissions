class Solution {
    int dp[302];
    bool solve(int idx, string &s, unordered_set<string> &wordDict){
        int n = s.size();
        if(idx==n){
            return true;
        }
        if(dp[idx]!=-1) return dp[idx];
        if(wordDict.find(s)!=wordDict.end()) return dp[idx]=true;
        for(int l=1;l<=n;l++){
            string temp = s.substr(idx,l);
            if(wordDict.find(temp)!=wordDict.end() && solve(idx+l,s,wordDict)) return dp[idx]=true;
        }
        return dp[idx]=false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st(wordDict.begin(),wordDict.end());
        memset(dp,-1,sizeof(dp));
        int n = s.size();
      return solve(0,s,st);
    }
};