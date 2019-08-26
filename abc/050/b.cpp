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

int main(){
    int n;
    cin >> n;
    ll t[n+1];
    ll all = 0LL;
    for(int i = 1; i <= n; i++){
        cin >> t[i];
        all += t[i];
    }
    int m;
    cin >> m;
    int p[m];
    ll x[m];
    for(int i = 0; i < m; i++){
        cin >> p[i] >> x[i];
    }
    for(int i = 0; i < m; i++){
        cout << all - t[p[i]] + x[i] << endl;
    }
    return 0;
}
