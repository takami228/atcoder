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
    vector<int> s;
    int sum = 0;
    s.push_back(0);
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        s.push_back(t);
        sum += t;
    }
    sort(s.begin(), s.end());
    int ans = sum;
    for(int i = 0; i < s.size(); i++){
        if((ans - s[i]) % 10 != 0){
            ans -= s[i];
            break;
        }
    }
    if(ans % 10 == 0){
        cout << 0 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
