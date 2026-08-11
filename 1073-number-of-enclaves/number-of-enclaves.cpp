class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int a=0;
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    a++;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(grid[i][0]==1){
                q.push({i,0});
                grid[i][0]=2;
                a--;
            }
            if(grid[i][n-1]==1){ 
                q.push({i,n-1});
                grid[i][n-1]=2;
                a--;
            }
        }
        for(int i=1;i<n-1;i++){
            if(grid[0][i]==1){ 
                q.push({0,i});
                grid[0][i]=2;
                a--;
            }
            if(grid[m-1][i]==1){ 
                q.push({m-1,i});
                grid[m-1][i]=2;
                a--;
            }
        }
        int r[4] = {0,0,1,-1};
        int c[4] = {1,-1,0,0};
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            for(int i =0;i<4;i++){
                int nx = x+r[i];
                int ny = y+c[i];
                if(nx>0 && nx<m-1 && ny>0 && ny<n-1 && grid[nx][ny]==1){
                    a--;
                    q.push({nx,ny});
                    grid[nx][ny]=2;
                }
            }
        }
        return a;
    }
};