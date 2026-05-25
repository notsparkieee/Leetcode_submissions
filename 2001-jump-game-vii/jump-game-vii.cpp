class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        
        int n = s.size();

        queue<int> q;
        q.push(0);

        vector<bool> visited(n, false);
        visited[0] = true;

        int far = 0;

        while (!q.empty()) {

            int i = q.front();
            q.pop();

            if (i == n - 1)
                return true;

            int start = max(i + minJump, far + 1);
            int end = min(i + maxJump, n - 1);

            for (int j = start; j <= end; j++) {

                if (s[j] == '0' && !visited[j]) {
                    visited[j] = true;
                    q.push(j);
                }
            }

            far = end;
        }

        return false;
    }
};