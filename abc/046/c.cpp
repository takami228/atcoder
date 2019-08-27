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

ll lmax(ll a, ll b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}

ll llceil(ll a, ll b){
    if(a % b == 0){
        return a / b;
    } else {
        return a / b + 1LL; 
    }
}

int main(){
    int n;
    cin >> n;
    int t[n];
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> t[i] >> a[i];
    }
    ll x = 1LL;
    ll y = 1LL;
    for(int i = 0; i < n; i++){
        ll m = lmax(llceil(x, t[i]), llceil(y, a[i]));
        x = m*t[i];
        y = m*a[i];
    }
    cout << x + y << endl;
    return 0;
}
