class Solution {
public:
    bool isCycleDFS(int src , vector<vector<int>> &edges,vector<bool> &vis,vector<bool> &recPath){
        vis[src] = true;
        recPath[src] = true;
        for(int i = 0 ; i <edges.size();i++){
            int v = edges[i][0];
            int u = edges[i][1];
            if(u == src){
                if(!vis[v]){
                    if(isCycleDFS(v,edges,vis,recPath)){
                        return true;
                    }    
                }else if(recPath[v]){
                    return true;
                }
            }
        }
        recPath[src] = false;
        return false;
    }
    void topoOder(int src , vector<vector<int>> &edges,vector<bool> &vis,stack<int> &s){
         vis[src] = true;
        for(int i = 0 ; i <edges.size();i++){
            int v = edges[i][0];
            int u = edges[i][1];
            if(u == src){
                if(!vis[v]){
                    topoOder(v,edges,vis,s);
                    
                }
            }
        }
        s.push(src);
    }
    vector<int> findOrder(int n, vector<vector<int>> &edges) {
        vector<bool> vis(n,false);
        vector<bool> recPath(n,false);

        vector<int> ans;

        for(int i = 0 ; i < n ;i++){
            if(!vis[i]){
                if(isCycleDFS(i,edges,vis,recPath)){
                    return ans;
                }
            }
        }
        stack<int>s;
        vis.assign(n,false);
        for(int i = 0 ; i < n ;i++){
            if(!vis[i]){
                topoOder(i,edges,vis,s);
            }
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};
