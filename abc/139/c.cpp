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
    int ans = 0;
    int tmp = 0;
    ll h;
    cin >> h;
    for(int i = 1; i < n; i++){
        ll h_next;
        cin >> h_next;
        if(h >= h_next){
            tmp++;
        } else {
            ans = max(ans, tmp);
            tmp = 0;
        }
        h = h_next;
    }
    ans = max(ans, tmp);
    cout << ans << endl;
    return 0;
}
