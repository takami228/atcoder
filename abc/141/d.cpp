#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
using ll = long long;

struct CustomCompare{
    bool operator()(const ll& lhs, const ll& rhs){
        return lhs < rhs;
    }
};

int main(){
    int n, m;
    cin >> n >> m;
    priority_queue<ll, vector<ll>, CustomCompare > que;
    for(int i = 0; i < n; i++){
        ll a;
        cin >> a;
        que.push(a);
    }
    for(int i = 0; i < m; i++){
        ll p = que.top();
        que.pop();
        que.push( p / 2);
    }
    ll ans = 0LL;
    while(!que.empty()){
        ll p = que.top();
        ans += p;
        que.pop();
    }
    cout << ans << endl;
    return 0;
}
