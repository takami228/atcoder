#include <iostream>
#include <string>
using namespace std;

long calc(long x, long d, long n){
    if(n == 0){
        return 1;
    } else {
        return (x * (calc(x+d, d, n-1)))%1000003;
    }
}

int main(){
    int q;
    cin >> q;
    long x[q+1];
    long d[q+1];
    long n[q+1];
    for(int i = 1; i <= q; i++){
        cin >> x[i] >> d[i] >> n[i];
    }

    for(int i = 1; i <= q; i++){
        cout << calc(x[i], d[i], n[i]) << endl;
    }
    return 0;
}