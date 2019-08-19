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
    map<long long, long long> m;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        m[a]++;
    }
    int ans = 0;
    for(auto x : m){
        if(x.second % 2 == 1){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
