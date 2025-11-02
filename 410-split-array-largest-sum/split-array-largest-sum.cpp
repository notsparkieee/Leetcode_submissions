class Solution {
    bool check(vector<int>&nums,int mid,int k){
        int students = 1;
        int s = 0;
        for (int page : nums){
            if(page>mid) return false;
            if(page+s<=mid){
                s+=page;
            }
            else{
                students++;
                s = page;
            }
        }
        return students<=k;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = -1;
        int low = *max_element(nums.begin(),nums.end());
        int hi = accumulate(nums.begin(),nums.end(),0);
        while(low<=hi){
            int mid = (low+hi)/2;
            if(check(nums,mid,k)){
                ans = mid;
                hi = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};