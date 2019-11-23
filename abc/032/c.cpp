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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    bool isContainZero = false;
    for (int i = 0; i < n; ++i){
        cin >> v[i];
        isContainZero |= (v[i] == 0); 
    }

    if(isContainZero){
        cout << n << endl;
        return 0;
    }

    ll ans = 0;
    for (ll left = 0; left < n; ++left) {
        ll s = 1;
        ll res = 1;
        ll right = left;
        if(s < k){
            while (right < n && s * v[right] <= k) {
                s *= v[right];
                ++right;
            }
            ans = max(ans, (right - left));
        } else {
            continue;
        }
    }
    cout << ans << endl;
}
