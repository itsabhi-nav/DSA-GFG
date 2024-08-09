//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool CycleDetect(int node, int parents , vector<int>adj[], vector<bool>&visited){
        visited[node]=1;
        
        for(int j =0; j<adj[node].size(); j++){
            if(parents==adj[node][j])
            continue;
            if(visited[adj[node][j]])
            return 1;
            
            if(CycleDetect(adj[node][j], node, adj, visited))
            return 1;
        }
        return 0;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        vector<bool>visited(V,0);

        for(int i =0; i<V; i++){
            if(!visited[i]&&CycleDetect(i,-1,adj,visited)){
                return 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends