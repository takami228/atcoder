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
    ll n;
    cin >> n;
    ll ans = n - 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ans = min(ans, (i - 1) + (n/i - 1));
        }
    }
    cout << ans << endl;
    return 0;
}
