class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n1 = arr1.size();
        unordered_set<string>st;
        for(int i=0;i<n1;i++){
            string s = to_string(arr1[i]);
            for(int j=1;j<=s.size();j++){
                string prefix = s.substr(0,j);
                st.insert(prefix);
            }
        }
        int n2 = arr2.size();
        int maxi = 0;
        for(int i=0;i<n2;i++){
            string s = to_string(arr2[i]);
            for(int j=1;j<=s.size();j++){
                string pre = s.substr(0,j);
                if(st.find(pre)!=st.end()){
                    int b = pre.size();
                    maxi = max(maxi,b);
                }
            }
        }
        return maxi;
    }
};