class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int x = image[sr][sc];
        if(x==color) return image;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc]=color;
        int r[4] = {0,0,1,-1};
        int c[4] = {1,-1,0,0};
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            int row=node.first;
            int col=node.second;
            for(int i=0;i<4;i++){
                int nr=row+r[i];
                int nc=col+c[i];
                if(nr>=0 && nr<m && nc>=0 && nc<n && image[nr][nc]==x){
                    image[nr][nc]=color;
                    q.push({nr,nc});
                }
            }
        }
        return image;
    }
};