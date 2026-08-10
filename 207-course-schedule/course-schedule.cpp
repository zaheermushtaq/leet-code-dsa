class Solution {
public:
    bool dfs(int s,vector<int> &vis,vector<int> &pathvis,vector<int> adj[]){
        vis[s]=1;
        pathvis[s]=1;
        for(auto it : adj[s]){
            if(!vis[it]){
                if(dfs(it,vis,pathvis,adj)==true) return true;
            }
            else if(pathvis[it]) return true;
        }
        pathvis[s]=0;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int> vis(n,0);
        vector<int> pathvis(n,0);
        vector<int> adj[n+1];
        for(auto it : p){
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i,vis,pathvis,adj)==true) return false;
            }
        }
        return true;
    }
};