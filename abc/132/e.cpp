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
    int s, t;
    cin >> s >> t;
 
    queue<pair<int, int> > queue;
    for(int i = 0; i < G[s].size(); i++){
        pair<int, int> p = make_pair(G[s][i], 1);
        queue.push(p);
    }
    int ans = -1;
    int count = 0;
    while(!queue.empty()){
        bool isEnd = false;
        pair<int, int> next = queue.front();
        int node = next.first;
        int depth = next.second;
        queue.pop();
        if(node == t && depth % 3 == 0){
            ans = depth / 3;
            break;
        }
        for(int i = 0; i < G[node].size(); i++){
            pair<int, int> p = make_pair(G[node][i], depth + 1);
            queue.push(p);
        }
        if(depth == 3*n + 1){
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}