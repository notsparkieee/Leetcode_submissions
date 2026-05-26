class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        int cnt = 0;
        set<int>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                if(abs(word[i]-word[j])==32 && st.find(word[i]-'0')==st.end()&&  st.find(word[j]-'0')==st.end() ) {
                    cnt++;
                    st.insert(word[i]-'0');
                    st.insert(word[j]-'0');
                }
            }
        }
        return cnt;
    }
};