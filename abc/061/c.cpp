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
    ll k;
    cin >> n >> k;
    vector<pair<int, int> > v;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        pair<int, int> p = make_pair(a, b);
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    ll t = k;
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        int a = v[i].first;
        int b = v[i].second;
        t -= b;
        if(t <= 0){
            ans = a;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
