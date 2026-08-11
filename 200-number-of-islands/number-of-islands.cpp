class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>> q;
        int a=0;
        int r[4]={0,0,1,-1};
        int c[4]={1,-1,0,0};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){ 
                    q.push({i,j});
                    a++;
                    grid[i][j]='0';
                }
                while(!q.empty()){
                    auto [x,y] = q.front();
                    q.pop();
                    for(int i=0;i<4;i++){
                        int nx=x+r[i];
                        int ny=y+c[i];
                        if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]=='1'){
                            q.push({nx,ny});
                            grid[nx][ny]='0';
                        }
                    }
                }
            }
        }
        return a;
    }
};