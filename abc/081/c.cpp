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


int main(){
    int n, k;
    cin >> n >> k;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        m[a]++;
    }
    vector< pair<int, int> > v;
    for(auto x : m){
        pair<int,int> p = make_pair(x.second, x.first);
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    if(v.size() > k){
        for(int i = 0; i < v.size() - k; i++){
            ans += v[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}
