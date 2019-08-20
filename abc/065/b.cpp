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
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int now = 1;
    int ans = -1;
    for(int i = 1; i <= n; i++){
        now = a[now];
        if(now == 2){
           ans = i;
           break;
        }
    }
    cout << ans << endl;
    return 0;
}
