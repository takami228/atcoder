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
    ll n, ans;
    cin >> n;
    ans = 1LL;
    for(int i = 1; i <= n; i++){
        ans = (ans*i) % 1000000007;
    }
    cout << ans << endl;
    return 0;
}
