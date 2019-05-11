#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long n;
    cin >> n;
    long ans = 0;
    for(long i = 2; i < n; i++){
        if(n / i == n % i){
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}