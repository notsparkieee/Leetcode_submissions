class Solution {
    bool isPal(int i,int j,string &s){
        if(i>=j) return true;
          if(s[i]==s[j]){
            return isPal(i+1,j-1,s);
          }
          else return false;
    }
    void rec(int start,vector<vector<string>>&ans,vector<string>&curr,string s,vector<vector<bool>>&is){
        int n = s.size();
        if(start==n){
            ans.push_back(curr);
            return;
        }
        for(int end = start;end<n;end++){
            if(is[start][end]){
                curr.push_back(s.substr(start,end-start+1));
                rec(end+1,ans,curr,s,is);
                curr.pop_back();
            }

        }
    }
public:
    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<vector<bool>>is(n,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isPal(i,j,s)){
                    is[i][j] = 1;
                }
                else is[i][j] = 0;
            }
        }
        vector<vector<string>>ans;
        vector<string>curr;
        rec(0,ans,curr,s,is);
        return ans;
    }
};