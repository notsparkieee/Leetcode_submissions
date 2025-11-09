class Solution {
    void rec(int i,int sum_left,int taken,int k,vector<int>&nums,vector<vector<int>>&ans){
        if(i==10){
            if(taken==k && sum_left==0){
                ans.push_back(nums);
                return ;
            }
            else return;
        }
        if (sum_left < 0 || taken > k) return;

        //take i
        {
             nums.push_back(i);
        rec(i+1,sum_left - i,taken+1,k,nums,ans);
        nums.pop_back();
        }
        rec(i+1,sum_left,taken,k,nums,ans);

    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>nums;
        rec(1,n,0,k,nums,ans);
        return ans;
        
    }
};