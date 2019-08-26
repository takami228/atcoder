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
    int n, m;
    cin >> n >> m;
    ll s_x[n];
    ll s_y[n];
    ll c_x[m];
    ll c_y[m];
    int ans[n];
    for(int i = 0; i < n; i++){
        cin >> s_x[i] >> s_y[i];
    }
    for(int i = 0; i < m; i++){
        cin >> c_x[i] >> c_y[i];
    }
    for(int i = 0; i < n; i++){
        ll d = 400000004; 
        for(int j = 0; j < m; j++){
            ll l = abs(s_x[i] - c_x[j]) + abs(s_y[i] - c_y[j]);
            if(d > l){
                d = l;
                ans[i] = j + 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
    return 0;
}
