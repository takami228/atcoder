#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    int b[n+1];
    int c[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    b[1] = a[1];
    for(int i = 2; i <= n; i++){
        b[i] = max(b[i-1], a[i]);
    }
    c[n] = a[n];
    for(int i = n-1; i >= 1; i--){
        c[i] = max(c[i+1], a[i]);
    }
    cout << c[2] << endl;
    for(int i = 2; i <= n-1; i++){
        cout << max(b[i-1], c[i+1]) << endl;
    }
    cout << b[n-1] << endl;
    return 0;
}