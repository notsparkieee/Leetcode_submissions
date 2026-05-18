class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();

        if(n == 1) return 0;

        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }

        queue<pair<int,int>> q;
        vector<int> vis(n, 0);

        q.push({0, 0});
        vis[0] = 1;

        while(!q.empty()) {

            int node = q.front().first;
            int steps = q.front().second;
            q.pop();

            if(node == n - 1) return steps;

            // i + 1
            if(node + 1 < n && !vis[node + 1]) {
                vis[node + 1] = 1;
                q.push({node + 1, steps + 1});
            }

            // i - 1
            if(node - 1 >= 0 && !vis[node - 1]) {
                vis[node - 1] = 1;
                q.push({node - 1, steps + 1});
            }

            // same value jumps
            for(int next : mp[arr[node]]) {
                if(!vis[next]) {
                    vis[next] = 1;
                    q.push({next, steps + 1});
                }
            }

            // IMPORTANT OPTIMIZATION
            mp[arr[node]].clear();
        }

        return -1;
    }
};