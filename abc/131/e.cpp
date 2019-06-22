#include<iostream>
#include<vector>
using namespace std;
using Graph = vector<vector<int> >;

int main(){
    int n;
    cin >> n;
    Graph G(n+1);
    int v;
    int u;
    for(int i = 1; i <= n; i++){
      cin >> u >> v;
      G[u].push_back(v);
      G[v].push_back(u);
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < G[i].size(); j++){
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}