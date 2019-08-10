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

struct node{
    int index;
    int time;
    int cost;
};

struct CustomCompare{
    bool operator()(const node& l, const node& r){
        if(l.cost == r.cost){
            return l.time < r.time;
        } else {
            return l.cost < r.cost;
        }
    }
};

bool contains(vector<int> v, int target){
    return std::find(v.begin(), v.end(), target) != v.end();
}

int main(){
    int n, m;
    cin >> n >> m;
    int a, b;
    priority_queue<node, vector<node>, CustomCompare> queue[m+1];
    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        node g = {i, a, b};
        if(a <= m){
            queue[a].push(g);
        }
    }
    long long ans = 0;
    priority_queue<node, vector<node>, CustomCompare> worklist;
    for(int i = 1; i <= m; i++){
        while(!queue[i].empty()){
            worklist.push(queue[i].top());
            queue[i].pop();
        }
        if(!worklist.empty()){
            node work = worklist.top();
            ans += work.cost;
            worklist.pop();
        }
    }
    cout << ans << endl;
    return 0;
}