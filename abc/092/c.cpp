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
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    long long dpi[n+1];
    long long dpn[n+1];
    if(n != 2){
        dpi[0] = 0;
        dpi[1] = abs(a[1]);
        for(int i = 2; i <= n; i++){
            dpi[i] = dpi[i-1] + abs(a[i-1] - a[i]);
        }
        dpn[n] = abs(a[n]);
        for(int i = n-1; i >= 0; i--){
            dpn[i] = dpn[i+1] + abs(a[i] - a[i+1]);
        }
        cout << abs(a[2]) + dpn[2] << endl;
        for(int i = 2; i <= n-1; i++){
            cout << dpi[i-1] + abs(a[i-1] - a[i+1]) + dpn[i+1] << endl;
        }
        cout << dpi[n-1] + abs(a[n-1]) << endl;
    } else {
        cout << 2*abs(a[2]) << endl;
        cout << 2*abs(a[1]) << endl;
    }
    return 0;
}
