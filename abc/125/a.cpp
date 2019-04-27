#include <iostream>
using namespace std;

int main(){
    int a, b, t;
    cin >> a >> b >> t;
    int ans = 0;
    for(int i = 1; i <= t; i++){
        if(i % a == 0){
            ans += b;
        }
    }
    cout << ans << endl;
    return 0;
}