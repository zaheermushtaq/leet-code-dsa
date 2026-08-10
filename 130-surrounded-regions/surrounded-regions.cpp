class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                q.push({i,0});
                board[i][0]='Y';
            }
            if(board[i][n-1]=='O'){ 
                q.push({i,n-1});
                board[i][n-1]='Y';
            }
        }
        for(int i=1;i<n-1;i++){
            if(board[0][i]=='O'){ 
                q.push({0,i});
                board[0][i]='Y';
            }
            if(board[m-1][i]=='O'){ 
                q.push({m-1,i});
                board[m-1][i]='Y';
            }
        }

        int r[4]={0,0,1,-1};
        int c[4]={1,-1,0,0};

        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nx=x+r[i];
                int ny=y+c[i];
                if(nx>0 && ny>0 && nx<m-1 && ny<n-1 && board[nx][ny]=='O'){ 
                    board[nx][ny]='Y';
                    q.push({nx,ny});
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='Y') board[i][j]='O';
                else if(board[i][j]=='O') board[i][j]='X';
            }
        }
    }
};