class Solution {
  public:
    struct Choice {
        char dir;
        int dx;
        int dy;
    };
    vector<Choice> moves = {
        {'D', 1, 0},
        {'L', 0, -1},
        {'R', 0, 1},
        {'U', -1, 0}
    };

    void solve(int n,vector<vector<int>>& maze,vector<vector<int>>& visited,int x,int y,string curr,vector<string>& res){
        if(x<0 ||y<0 ||x>=n || y>=n || visited[x][y]==0 || maze[x][y]==0) return ;
        if(x==n-1 && y==n-1) {
            res.push_back(curr);
            return ;
        }
        visited[x][y]=0;
        for(auto ele:moves){
            solve(n,maze,visited,x+ele.dx,y+ele.dy,curr+ele.dir,res);
        }
        visited[x][y]=1;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n=maze.size();
        vector<vector<int>> visited(n, vector<int>(n, 1));
        if(maze[0][0]== 0 || maze[n-1][n-1]==0) return {};
        vector<string> res;
        solve(n,maze,visited,0,0,"",res);
        return res;
    }
};