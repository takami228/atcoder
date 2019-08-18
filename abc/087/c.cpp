#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a1[n+1];
    int a2[n+1];
    int dp1[n+1];
    int dp2[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a1[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> a2[i];
    }
    dp1[1] = a1[1];
    for(int i = 2; i <= n; i++){
        dp1[i] = dp1[i-1] + a1[i];
    }
    dp2[n] = a2[n];
    for(int i = n-1; i >= 1; i--){
        dp2[i] = dp2[i+1] + a2[i];
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans, dp1[i] + dp2[i]);
    }
    cout << ans << endl;
    return 0;
}