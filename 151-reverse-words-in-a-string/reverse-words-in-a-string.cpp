class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string word = "";
        vector<string>ans;
        for(char c : s){
            if(c!=' '){
                word+=c;
            }
            else{
                if(!word.empty()){
                    ans.push_back(word);
                    word = "";
                }
            }
        }
        if(!word.empty()){
            ans.push_back(word);
        }
        reverse(ans.begin(),ans.end());
        string w;
        for(int i=0;i<ans.size();i++){
            w+=ans[i];
            if (i!=ans.size()-1) w+=' ';
        }
        return w;
    }
};