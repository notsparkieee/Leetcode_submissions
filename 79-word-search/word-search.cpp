class Solution {
    bool rec(int i,int j,string &curr,vector<vector<char>>&board,string word){
         int m = board.size();
        int n = board[0].size();
                if(i<0 || i>=m || j<0 || j>=n) return false;
                        curr+=board[i][j];
                         if(curr.back() != word[curr.size()-1]) {
            curr.pop_back();
            return false;
        }

   char ch = board[i][j];

        if(curr==word){
            return true;
        }
       board[i][j] = '#';
        bool a = rec(i+1,j,curr,board,word);
        bool b = rec(i-1,j,curr,board,word);
        bool c = rec(i,j+1,curr,board,word);
        bool d = rec(i,j-1,curr,board,word);
        curr.pop_back();
        board[i][j] = ch;
        return a || b || c || d;

    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        string curr;
          for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rec(i,j,curr,board,word)) return true;
            }
        }
        return false;

    }
};