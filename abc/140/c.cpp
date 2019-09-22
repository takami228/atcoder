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
    ll ans = 0;
    ll b[n+1];
    for(int i = 1; i <= n-1; i++){
        cin >> b[i];
    }
    b[0] = 1000000;
    b[n] = 1000000;
    for(int i = 1; i <= n; i++){
        ans += min(b[i-1], b[i]);
    }
    cout << ans << endl;
    return 0;
}
