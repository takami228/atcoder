#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool d[101];
    for(int i = 0; i < 101; i++){
        d[i] = false;
    }
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        d[m] = true;
    }
    int ans = 0;
    for(int i = 1; i < 101; i++){
        if(d[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}