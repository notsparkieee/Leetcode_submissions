class Solution {
    void rec(vector<string>&ans,int i,int depth,int n,string curr){
        if(depth<0) return;
             if(i==2*n){
                if(depth==0){
                    ans.push_back(curr);
                }
                return;
             }
             curr.push_back('(');
             rec(ans,i+1,depth+1,n,curr);
             curr.pop_back();

             curr.push_back(')');
             rec(ans,i+1,depth-1,n,curr);
             curr.pop_back();
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string curr;
      rec(ans,0,0,n,curr);
      return ans;
      
    }
};