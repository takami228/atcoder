#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int l[n];
    for(int i = 0; i < n; i++){
        cin  >> l[i];
    }
    int ans = 1;
    int d = 0;
    for(int i = 0; i < n; i++){
        d = d + l[i];
        if(d <= x){
            ans++;
        } else {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}