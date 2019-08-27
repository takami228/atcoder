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
    ll ans = k;
    for(ll i = 2; i <= n; i++){
        ans *= (k-1);
    }
    cout << ans << endl;
    return 0;
}
