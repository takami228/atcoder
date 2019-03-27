#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    while(true){
        bool result = true;
        for(int i = 0; i < n; i++){
            result &= (a[i] % 2 == 0);
            if(!result) break;
        }
        if(!result){
            break;
        } else {
            ans++;
            for(int i = 0; i < n; i++){
                a[i] /= 2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}