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

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    int a[n+1];
    for(int i = 0; i <= n; i++){
        a[i] = 0;
    }
    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        a[t] = 1;
    }
    int cost1 = 0;
    for(int i = 0; i <= x; i++){
        cost1 += a[i];
    }
    int cost2 = 0;
    for(int i = x; i <= n; i++){
        cost2 += a[i];
    }
    cout << min(cost1, cost2) << endl;
    return 0;
}
