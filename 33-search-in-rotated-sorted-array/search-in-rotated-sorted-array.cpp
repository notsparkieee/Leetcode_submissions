class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0; int hi = n-1;
        int ans = -1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(nums[mid]==target){
                ans = mid;
                break;
            }
          else  if(nums[mid]>=nums[0]){
                //lh sorted
                if(target>=nums[0] && target<nums[mid]){
                    // lh mai hai
                    hi = mid-1;
                }
                else lo = mid+1;

            }
            else{
                //rh sorted
                if(target>nums[mid] && target<=nums[hi]){
                    lo = mid+1;
                }
                else hi = mid-1;
            }
        }
        return ans;
    }
};