#include <iostream>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    int a = 2*d + 1;
    int ans = n / a;
    if(n % a != 0){
        ans++;
    }
    cout << ans << endl;
    return 0;
}