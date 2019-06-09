#include <iostream>
using namespace std;

int abs(int a, int b){
    if(a >= b){
        return a - b;
    }
    else{
        return b - a;
    }
}

int main(){
    int n;
    cin >> n;
    int w[n+1];
    for(int i = 1; i <= n; i++){
        cin >> w[i];
    }
    int ans = 100000000;
    for(int i = 1; i <= n; i++){
        int a = 0;
        int b = 0;
        for(int j = 1; j <= i; j++){
            a += w[j];
        }
        for(int j = i+1; j <= n; j++){
            b += w[j];
        }
        ans = min(ans, abs(a,b));
    }
    cout << ans << endl;
    return 0;
}