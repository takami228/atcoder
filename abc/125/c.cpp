#include <iostream>
using namespace std;
 
int gcd(int x, int y) {
    if (y == 0){
        return x;
    }
    return gcd(y, x % y);
}
 
int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int c[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 1;
    if(n == 2){
        ans = max(a[0], a[1]);    
    } else if(n == 3) {
        ans = max(max(gcd(a[0], a[1]), gcd(a[0], a[2])), gcd(a[1], a[2]));
    } else {
        b[1] = gcd(a[0], a[1]);
        for(int i = 2; i < n; i++){
            b[i] = gcd(a[i], b[i-1]);
        }
        c[n-2] = gcd(a[n-2], a[n-1]);
        for(int i = n-3; i >= 0; i--){
            c[i] = gcd(a[i], c[i+1]);
        }
        for(int i = 0; i < n; i++){
            int ans_i = 1;
            if(i == 0){
                ans_i = c[1];
            } else if(i == 1){
                ans_i = gcd(a[0], c[2]);
            } else if(i == n-1){
                ans_i = b[n-2];
            } else {
                ans_i = gcd(b[i-1], c[i+1]);
            }
            ans = max(ans, ans_i);
        }
    }
    cout << ans << endl;
    return 0;
}