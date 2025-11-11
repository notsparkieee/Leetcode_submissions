class Solution {
public:
    int pivotInteger(int n) {
        vector<int>prefix(n+1);
        prefix[1] = 1;
        for(int i=2;i<=n;i++){
            prefix[i] = prefix[i-1] + i;
        }
        int pivot = -1;
        prefix[0] = 0;
        for(int i=1;i<=n;i++){
            if(prefix[i]==prefix[n]-prefix[i-1]) return i;
        }
        return -1;
    }
};