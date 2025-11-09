class Solution {
    void rec(int i,string digits,int n,string &curr,vector<string>&ans,unordered_map<char,string>&mpp){
          if(i==n){
            ans.push_back(curr);
            return;
          }
          for(char ch: mpp[digits[i]]){
               curr.push_back(ch);
               rec(i+1,digits,n,curr,ans,mpp);
               curr.pop_back();

          }


    }
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        unordered_map<char,string>mpp = {
            {'2' , "abc"},
            {'3' , "def"},
             {'4', "ghi"},
            {'5' , "jkl"},
            {'6' , "mno"},
            {'7' ,"pqrs"},
            {'8' , "tuv"},
            {'9' , "wxyz"},
        };
        string curr;
        vector<string>ans;
        rec(0,digits,n,curr,ans,mpp);
        return ans;
    }
};