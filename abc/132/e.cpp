#include<iostream>
#include<vector>
#include<queue>
using namespace std;
using Graph = vector<vector<int> >;
 
int main(){
    int n, m;
    cin >> n >> m;
    Graph G(n+1);
    int v;
    int u;
    for(int i = 1; i <= m; i++){
      cin >> u >> v;
      G[u].push_back(v);
    }

    bool isVisited[n+1];
    for(int i = 1; i <= n; i++){
        isVisited[i] = false;
    }

    int s, t;
    cin >> s >> t;
 
    isVisited[s] = true;
    queue<pair<int, int> > queue;
    for(int i = 0; i < G[s].size(); i++){
        pair<int, int> p = make_pair(G[s][i], 1);
        queue.push(p);
    }
    int ans = -1;
    while(!queue.empty()){
        pair<int, int> next = queue.front();
        int node = next.first;
        int depth = next.second;
        queue.pop();
        if(depth % 3 == 0){
            isVisited[node] = true;
            if(node == t){
                ans = depth / 3;
                break;
            }
        }
        for(int i = 0; i < G[node].size(); i++){
            int node_next = G[node][i];
            int depth_next = depth + 1;
            pair<int, int> p = make_pair(node_next, depth_next);
            if(depth_next % 3 == 0){
                if(!isVisited[node_next]){
                    queue.push(p);
                }
            } else {
                queue.push(p);
            }
        }
        if(depth == 3*n + 1){
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}