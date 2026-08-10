class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> ans(m,vector<int>(n,-1));
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int r[4]={0,0,1,-1};
        int c[4]={1,-1,0,0};
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nx = x+r[i];
                int ny = y+c[i];
                if(nx>=0 && ny>=0 && nx<m && ny<n && ans[nx][ny]==-1){
                    ans[nx][ny]=1+ans[x][y];
                    q.push({nx,ny});
                }
            }
        }
        return ans;
    }
};