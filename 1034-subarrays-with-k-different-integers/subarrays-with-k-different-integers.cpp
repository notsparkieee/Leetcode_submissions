class Solution {
    private:
    int atmostK(vector<int>&nums,int k){
        if(k<=0) return 0;
        int n = nums.size();
        unordered_map<int,int>mpp;
        int head = -1; int tail = 0; int ans = 0;
        while(tail<n){
        while(head+1<n && (mpp.size()<k || (mpp.size()==k && mpp.count(nums[head+1])))){
            head++;
            mpp[nums[head]]++;
        }
        ans+=head-tail+1;
        if(mpp[nums[tail]]==1){
            mpp.erase(nums[tail]);
        }
        else{
            mpp[nums[tail]]--;
        }
        tail++;
    }
    return ans;
    }

public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();      
        return atmostK(nums,k) - atmostK(nums,k-1);                           
    }
};