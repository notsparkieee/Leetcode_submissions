class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        vector<int>small(26,-1);
        vector<int>large(26,-1);
       for(int i=0;i<n;i++){
       if(word[i]>='a' && word[i]<='z')  small[word[i]-97] = i;
       }
       for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z'&& large[word[i]-65]==-1){
                large[word[i]-65] = i;
            }
       }
       int cnt = 0;
       for(int i=0;i<26;i++){
          if(large[i]>=0 && small[i]>=0 && large[i]-small[i]>0) cnt++;
       }
       return cnt;
    }
};