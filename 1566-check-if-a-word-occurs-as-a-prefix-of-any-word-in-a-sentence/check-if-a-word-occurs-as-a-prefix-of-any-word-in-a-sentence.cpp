class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = searchWord.size();
        int word = 1;
        for(int i=0;i<sentence.size();i++){
            if(i>0 && sentence[i-1]!=' ') continue;
            int j = 0;
            int temp = i;
            while(sentence[temp]!=' ' && j<n){
                if(sentence[temp]==searchWord[j]){
                    temp++;
                    j++;
                    if(j==n) return word;
                }
                else {
                    break;
                }
            }
            word++;
        }
        return -1;
    }
};