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
    int d, n;
    cin >> d >> n;
    int ans = 0;
    if(d == 0){
        ans = n;
        if(n == 100){
            ans++;
        }
    } else if(d == 1){
        ans = 100*n;
        if(n == 100){
            ans += 100;
        }
    } else {
        ans = 100*100*n;
        if(n == 100){
            ans += 10000;
        }

    }
    cout << ans << endl;
    return 0;
}
