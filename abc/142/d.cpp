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

int main(){
    ll a, b;
    cin >> a >> b;
    ll c = gcd(a, b);
    ll ans = 1;
    ll t = 2;
    while(true){
        int count = 0;
        while(true){
            if(c % t == 0){
                c /= t;
                count++;
            } else {
                if(count != 0){
                    ans++;
                }
                break;
            }
        }
        if(c == 1){
            break;
        }
        if(t >= sqrt(c)){
            break;
        }
        t++;
    }
    cout << ans << endl;
    return 0;
}
