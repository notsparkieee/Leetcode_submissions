class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        if(nums.size()!=maxi+1) return false;
         unordered_map<int,int>mpp;
         for(auto it : nums) mpp[it]++;
         for(auto it : mpp){
            if(it.first!=maxi && it.second!=1) return false;
            if(it.first==maxi && it.second!=2) return false;
         }
         return true;
 
    }
};