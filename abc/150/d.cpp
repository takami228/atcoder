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

ll lcm(ll a, ll b) {
    ll g = gcd(a, b);
    return a / g * b;
}

int main(){
	ll n, m;
    ll a[n];
	ll co1 = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		ll a1 = a[i];
		ll co = 0;
		for (;;) {
			if (a[i] % 2 == 0) {
				a[i] /= 2;
				co++;
			}
			else {
				break;
			}
		}
		if (i != 0) {
			if (co1 != co) {
				cout << "0" << endl;
				return 0;
			}
		}
		co1 = co;
		a[i] = a1 / 2;
	}
	ll b = 1;
	for (int j = 0; j < n; j++) {
		b = lcm(b, a[j]);
		if (b > m) {
			cout << "0" << endl;
			return 0;
		}
	}
	ll ans = 0;
	if (b <= m) {
		m -= b;
		ans++;
		ans += m / (b * 2);
	}
	cout << ans << endl;
	return 0;
}
