class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int m=grid.size();
        int n=grid[0].size();
        int f=0;
        int min=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2) q.push({i,j});
                else if(grid[i][j]==1) f++;
            }
        }
        int r[4]={0,0,1,-1};
        int c[4]={1,-1,0,0};
        while(!q.empty() && f>0){
            int size=q.size();
            while(size--){
                auto node=q.front();
                q.pop();
                int row=node.first;
                int col=node.second;
                for(int i=0;i<4;i++){
                    int nr=row+r[i];
                    int nc=col+c[i];
                    if(nc>=0 && nc<n && nr>=0 && nr<m && grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        q.push({nr,nc});
                        f--;
                    }
                }
            }
            min++;
        }
        if(f==0) return min;
        else return -1;
    }
};