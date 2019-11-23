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

void print_set(set<int> s){
    cout << "[";
    for(int x : s){
        cout << x << ",";
    }
    cout << "]" << endl;
}

int main(){
    int n, m;
    cin >> n >> m;
    set<int> s[m+1];
    int a[m+1];
    for(int i = 1; i <= m; i++){
        cin >> a[i];
        int b;
        cin >> b;
        for(int j = 1; j <= b; j++){
            int k;
            cin >> k;
            s[i].insert(k);
        }
    }
    ll ans = 100000001;
    for (ll bit = 1; bit < (1<<m); ++bit){
        vector<int> v;
        for (ll i = 0; i < m; ++i) {
            if (bit & (1<<i)) {
                v.push_back(i+1);
            }
        }
        set<int> o, o_next;
        ll ans_next = 0;
        bool flag = false;
        for(int i = 0; i < v.size(); i++){
            set_union(o.begin(), o.end(), s[v[i]].begin(), s[v[i]].end(), inserter(o_next, o_next.end()));
            o = o_next;
            ans_next += a[v[i]];
            if(ans_next >= ans){
                flag = true;
                break;
            }
        }
        if(o.size() != n || flag){
            continue;   
        } else {
            ans = min(ans, ans_next);
        }
    }
    
    if(ans == 100000001){
        ans = -1;
    }
    cout << ans << endl;
    return 0;
}
