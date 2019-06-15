#include <iostream>
using namespace std;

int main(){
    int a, b, k;
    cin >> a >> b >> k;
    int ans[k+1];
    int n = min(a, b);
    int m = 1;
    for(int i = 1; i <= n; i++){
        if(a % i == 0 && b % i == 0){
            ans[m] = i;
            m++;
        }
    }
    cout << ans[m-k] << endl;
    return 0;
}