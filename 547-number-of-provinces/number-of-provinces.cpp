class Solution {
public:
    void dfs(int i,vector<vector<int>> &adj,vector<int> &vis){
        vis[i]=1;
        for (int j = 0; j < adj.size(); j++) {
            if (adj[i][j] == 1 && !vis[j]) {
                dfs(j, adj, vis);
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& adj) {
        vector<int> vis(adj.size(),0);
        int c=0;
        for(int i=0;i<adj.size();i++){
            if(!vis[i]){
                c++;
               
                dfs(i,adj,vis);
            }
        }
        return c;
    }
};