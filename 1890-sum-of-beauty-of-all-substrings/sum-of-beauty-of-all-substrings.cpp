class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
                            vector<int>f(26,0);

            for(int j=i;j<n;j++){
                f[s[j]-'a']++;
                int maxi = INT_MIN;
                int mini = INT_MAX;
                for(int k=0;k<26;k++){
                    if(f[k]>0){
                        maxi = max(maxi,f[k]);
                        mini = min(mini,f[k]);
                    }
                }
                cnt+=(maxi-mini);

            }
        }
        return cnt;
    }
};