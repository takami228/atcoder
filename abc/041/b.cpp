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

#define imax 1000000007

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = ((a % imax) * (b % imax)) % imax;
    ans = (ans * (c % imax)) % imax;
    cout << ans << endl;
    return 0;
}
