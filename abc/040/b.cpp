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
    int ans = n;
    for(int i = 1; i <= sqrt(n); i++){
        int j = n / i;
        ans = min(ans, (n - i*j)+abs(i-j));
    }
    cout << ans << endl;
    return 0;
}
