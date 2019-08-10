#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

#define INF 1e18

struct edge {
    int to;
    long long cost;
};

typedef pair<long long, int> P;  // first は最短距離, second は頂点番号

vector<edge> tree[100001];
long long d[100001];
int N;

// s: 開始地点の頂点
void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d + N, INF);
    d[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top(); que.pop();
        int v = p.second;
        if (d[v] < p.first) { continue; }
        for (int i = 0; i < tree[v].size(); i++) {
            edge e = tree[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main(){
    int n, m, t;
}