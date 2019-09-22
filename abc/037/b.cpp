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
    ll a[n+1];
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
    int q;
    cin >> q;
    for(int i = 1; i <= q; i++){
        int l, r, t;
        cin >> l >> r >> t;
        for(int j = l; j <= r; j++){
            a[j] = t;
        }
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << endl;
    }
    return 0;
}
