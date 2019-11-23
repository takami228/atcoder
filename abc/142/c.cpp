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
    vector<pair<int, int> > v;
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        pair<int, int> p = make_pair(a, i);
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i].second << " ";
    }
    cout << endl;
    return 0;
}
