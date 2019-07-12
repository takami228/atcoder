#include <iostream>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 
    int ans = 0;
    for(int i = 0; i < n; i++){
        p -= a[i];
        if(p >= 0){
            ans++;
        } else {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}