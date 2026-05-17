class Solution {
    bool rec(int i,vector<int>&arr,vector<bool>&vis){
        if(i<0 || i>=arr.size()) return false;
              if(vis[i]) return false;

         if(arr[i]==0) return true;
                   vis[i] = 1;

          if(rec(i+arr[i],arr,vis)) return true;
          if(rec(i-arr[i],arr,vis)) return true;
          return false; 
          



    }
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        //recursion hone wala hai use puri hint mil gayi hai
        vector<bool>vis(n,0);
        return rec(start,arr,vis);

    }
};