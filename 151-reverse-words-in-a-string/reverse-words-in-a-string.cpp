class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i=0;
        string ans = "";
        while(i<n){
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            int j = i;
            string word = "";
            while(j<n && s[j]!=' ') j++;
            word = s.substr(i,j-i);
            if(ans.size()==0) ans = word;
            else ans = word + ' ' + ans;
            i = j;
        }
        return ans;
    }
};