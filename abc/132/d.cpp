#include <iostream>
#include <string>
using namespace std;

long long kaijo[2001];

long long permitation(int n, int k){
    return kaijo[n] / (kaijo[k] * kaijo[n-k]);
}

int main(){
    int n, k;
    cin >> n >> k;
    kaijo[0] = 1;
    kaijo[1] = 1;
    for(long long i = 2; i <= n; i++){
        kaijo[i] = kaijo[i-1]*i;
    }

    // for(int i = 1; i <= k; i++){
    //     long long ans = permitation(n-k+i, i) % 1000000007;
    //     cout << ans << endl;
    // }

    cout << permitation(2000, 1000) << endl;

    return 0;
}