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
    int n, k;
    cin >> n >> k;
    vector<int> l;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        l.push_back(m);
    }
    sort(l.begin(), l.end(), greater<int>());
    int ans = 0;
    for(int i = 0 ; i < k; i++){
        ans += l[i];
    }
    cout << ans << endl;
    return 0;
}
