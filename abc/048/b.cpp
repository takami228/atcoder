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
    ll a, b, x;
    cin >> a >> b >> x;
    ll b_shou = b / x;
    ll b_amari = b % x;
    ll a_shou = a / x;
    ll a_amari = a % x;
    ll ans = b_shou - a_shou;
    if(a_amari == 0){
        ans++;
    }
    cout << ans << endl;
    return 0;
}
