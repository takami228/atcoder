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
    return 0;
}