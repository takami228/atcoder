#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n+2];
    long long b[n+1];
    for(int i = 1; i <= n+1; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    long long ans = 0;
    long long amari = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] - amari >= 0){
            ans += amari;
            if(a[i] - amari - b[i] >= 0){
                ans += b[i];
                amari = 0;
            } else {
                ans += a[i] - amari;
                amari = b[i] - (a[i] - amari);
            }
        } else {
            ans += a[i];
            amari = b[i];
        }
    }
    ans += min(a[n+1], amari);
    cout << ans << endl;
    return 0;
}