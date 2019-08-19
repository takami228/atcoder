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

ll gcd(ll a, ll b) {
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    ll g = gcd(a, b);
    return a / g * b;
}

int main(){
    int n;
    cin >> n;
    ll ans = 1LL;
    for(int i = 0; i < n; i++){
        ll t;
        cin >> t;
        ans = lcm(ans, t);
    }
    cout << ans << endl;
    return 0;
}
