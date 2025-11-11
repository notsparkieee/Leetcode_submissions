class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>minRow(m,INT_MAX);
        vector<int>maxCol(n,INT_MIN);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                minRow[i] = min(minRow[i],matrix[i][j]);
            }
        }
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                maxCol[j] = max(maxCol[j],matrix[i][j]);
            }
        }
        vector<int>ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==minRow[i] && matrix[i][j]==maxCol[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
           return ans;
    }
};