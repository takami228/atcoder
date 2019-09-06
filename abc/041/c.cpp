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
    vector< pair<ll, int> > a;
    cin >> n;
    ll b;
    for(int i = 1; i <= n; i++){
        cin >> b;
        pair<ll, int> p = make_pair(-1*b, i);
        a.push_back(p);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        cout << a[i].second << endl;
    }
    return 0;
}
