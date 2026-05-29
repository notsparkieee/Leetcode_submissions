class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            int s = 0;
            int t = nums[i];
            while(t!=0){
                s+=t%10;
                t = t/10;
            }
            nums[i] = s;
            mini = min(mini,nums[i]);
        }
        return mini;
    }
};