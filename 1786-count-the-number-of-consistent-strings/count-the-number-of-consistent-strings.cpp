class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mpp;
        for(auto &it : allowed){
            mpp[it]++;
        }
        int cnt = 0;
        for(auto & s : words){
            bool flag = true;
            for(auto &b : s){
                if(mpp.find(b)==mpp.end()){
                    flag = false;
                }
            }
            if(flag) cnt++;

        }
        return cnt;

    }
};