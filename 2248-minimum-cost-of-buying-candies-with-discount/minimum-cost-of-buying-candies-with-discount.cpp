class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(),cost.end());
        int s = 0;
        int counter = 0;
        for(int i=n-1;i>=0;i--){
            if(counter==2){
                counter = 0;
                continue;
            }
           s+=cost[i];
           counter++;
        }
        return s;
    }
};