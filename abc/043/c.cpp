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
    ll a[n];
    ll sum = 0LL;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    ll c = (ll)(ceil((double)sum / (double)n));
    ll f = (ll)(floor((double)sum / (double)n));

    ll x = 0LL;
    ll y = 0LL;
    for(int i = 0; i < n; i++){
        x += (a[i] - c)*(a[i] - c);
        y += (a[i] - f)*(a[i] - f);
    }
    cout << min(x,y) << endl;
    return 0;
}
