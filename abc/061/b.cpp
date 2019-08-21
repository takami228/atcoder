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
    vector<int> city[n+1];
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        city[a].push_back(b);
        city[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){
        cout << city[i].size() << endl;
    }
    return 0;
}
