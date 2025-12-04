class Solution {
    int dp[53][53][53];
    int rec(int r1,int c1,int r2,vector<vector<int>>&grid){
        int n = grid.size();
        int c2 = r1+c1-r2;
        if(r1==n-1 && c1==n-1){
            return grid[r1][c1];
        }
        if(dp[r1][c1][c2]!=-1) return dp[r1][c1][c2];
        if(r1<0 || r1>n-1 || r2<0 || r2>n-1 || c1<0 || c1>n-1 || c2<0 || c2>n-1) return -1e9;
        if(grid[r1][c1]==-1 || grid[r2][c2]==-1) return -1e9;
        int cherries = grid[r1][c1];
        if(!(r1==r2 && c1==c2)) cherries+=grid[r2][c2];
        int ans = -1e9;
        int best = max({
           rec(r1+1,c1,r2+1,grid),rec(r1,c1+1,r2,grid),rec(r1+1,c1,r2,grid),rec(r1,c1+1,r2+1,grid)
        });
        cherries+=best;
        return dp[r1][c1][c2]=cherries;
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        memset(dp,-1,sizeof(dp));
          return max(0,rec(0,0,0,grid));
    }
};