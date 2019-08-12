#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<long long> h;
    long long l;
    for(int i = 0; i < n; i++){
        cin >> l;
        h.push_back(l);
    }
    sort(h.begin(), h.end());
    long long ans = 1000000001;
    for(int i = 0; i <= n-k; i++){
        ans = min(ans, h[k-1+i] - h[i]);
    }
    cout << ans << endl;
    return 0;
}