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
    ll t;
    cin >> n >> t;
    ll s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    ll ans = 0;
    ll e = 0;
    for(int i = 1; i < n; i++){
        if(e + t >= s[i]){
            ans += s[i] - e;
            e = s[i];
        } else {
            ans += t;
            e = s[i];
        }
    }
    ans += t;
    cout << ans << endl;
    return 0;
}
