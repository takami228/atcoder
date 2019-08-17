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
    int n;
    cin >> n;
    vector<long long> a;
    vector<long long> b;
    for(int i = 1; i <= n; i++){
        long long t;
        cin >> t;
        a.push_back(t);
        b.push_back(t - i);
    }
    sort(b.begin(), b.end());
    long long snuke;
    if(n % 2 == 0){
        snuke = (b[n/2-1]+b[n/2])/2;
    } else {
        snuke = b[n/2];
    }
    long long ans = 0;
    for(int i = 1; i <= n; i++){
        ans += abs(a[i-1] - (snuke+i));
    }
    cout << ans << endl;
    return 0;
}
