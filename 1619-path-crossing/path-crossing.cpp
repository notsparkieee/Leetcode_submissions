class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0; int y = 0;
        set<pair<int,int>>vis;
        vis.insert({0,0});
        for(char ch : path){
            if(ch=='N'){
                y++;
            }
            if(ch=='S'){
                y--;
            }
            if(ch=='E'){
                x++;
            }
            if(ch=='W'){
                x--;
            }
            if(vis.count({x,y})) return true;
            vis.insert({x,y});
        }
        return false;
        

    }
};