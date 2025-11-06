class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int bal = 0;
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(bal>0){
                  ans+=s[i];
                }
                bal++;
            }
            else if(s[i]==')'){
                if(bal!=1){
                    ans+=s[i];
                }
                bal--;
            }
        }
        return ans;
    }
};