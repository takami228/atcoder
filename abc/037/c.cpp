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
    int n, k;
    cin >> n >> k;
    ll a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    ll dp[n-k+2];
    for(int i = 1; i <= n - k + 1; i++){
        dp[i] = 0LL;
    }
    for(int i = 1; i <= k; i++){
        dp[1] += a[i];
    }
    for(int i = 2; i <= n - k + 1; i++){
        dp[i] = dp[i-1] - a[i-1] + a[i+k-1];
    }
    ll ans = 0LL;
    for(int i = 1; i <= n - k + 1; i++){
        ans += dp[i];
    }
    cout << ans << endl;
    return 0;
}
