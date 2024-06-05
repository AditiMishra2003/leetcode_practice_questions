class Solution {
public:
    int timer=1;
    void dfs(int node,int parent,vector<int> &vis,int tin[],int low[],vector<vector<int>>&bridges,vector<int> adj[]){
        vis[node]=1;
        tin[node]=low[node]=timer;
        timer++;
        for(auto it:adj[node]){
            if(it==parent)continue;
            if(vis[it]==0){
                dfs(it,node,vis,tin,low,bridges,adj);
                low[node]=min(low[it],low[node]);
                if(low[it]>tin[node]){
                    bridges.push_back({it,node});
                }
            }
            else{
                low[node]=min(low[it],low[node]);
            }
        }
        
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> vis(n,0);
        vector<int> adj[n];
        vector<vector<int>> bridges;
        int tin[n];
        int low[n];
        for(auto it:connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        dfs(0,-1,vis,tin,low,bridges,adj);
        return bridges;
    }
};