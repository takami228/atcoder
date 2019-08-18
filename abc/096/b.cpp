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
    int a, b, c, k;
    cin >> a >> b >> c >>k;
    int ans = 0;
    for(int l = 0; l <= k; l++){
        for(int m = 0; m+l <= k; m++){
            int n = k - l - m;
            ans = max(ans, (int)(a*pow(2,l) + b*pow(2,m) + c*pow(2,n)));
        }
    }
    cout << ans << endl;
    return 0;
}
