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
    long n, d, x;
    cin >> n >> d >> x;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int ans = x;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= d; j+=a[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
