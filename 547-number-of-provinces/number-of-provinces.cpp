class Solution {
    void dfs(int node , vector<vector<int>>& isConnected,vector<int>& vis){
        vis[node] = 1;
        for(int it=0;it<isConnected.size();it++){
            if(isConnected[node][it] == 1 && !vis[it]){
                dfs(it,isConnected,vis);
            }
        }
    }
public:

    int findCircleNum(vector<vector<int>>& isConnected) {
        int v =  isConnected.size();
        vector<int> vis(v,0);
        int cnt=0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,isConnected,vis);
            }
        }
        return cnt;
    }
};