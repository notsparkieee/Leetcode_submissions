class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi = INT_MIN;
        int n = colors.size();
        for(int i=1;i<n;i++){
            if(colors[i]!=colors[0]) maxi = max(maxi,i);
        }
        for(int i=0;i<n-1;i++){
            if(colors[n-1]!=colors[i]) maxi = max(maxi,abs(n-1-i));
        }
        return maxi;
    }
};