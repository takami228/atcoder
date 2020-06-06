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

ll d(ll x){
    int ans = 1;
    while(true){
        if(x < 10){
            break;
        } else {
            x /= 10;
            ans++;
        }
    }
    return ans;
}

 
int main(){
    ll a, b, x;
    cin >> a >> b >> x;
    ll ok = 1, ng = 1e9+1, ans = 0;
    while(llabs(ok - ng) > 1){
        ll mid = (ok + ng) / 2;
        if(a * mid + b * d(mid) <= x){
            ok = mid;
            ans = max(ans, ok);
        }
        else ng = mid;
    }
    if(a * ok + b * d(ok) <= x){
        ans = max(ans, ok);
    }
    cout << ans << endl;;
    return 0;
}
