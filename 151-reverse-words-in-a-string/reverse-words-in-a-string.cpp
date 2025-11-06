class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>words;
        string w;
        while(ss>>w){
            words.push_back(w);
        }
        reverse(words.begin(),words.end());
        string ans = "";
        for(int i=0;i<words.size();i++){
            if(i!=words.size()-1){
                ans+=words[i];
                ans+=" ";
            }
            else{
              ans+=words[i];
            }
        }
        return ans;

    }
};