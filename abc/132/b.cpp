#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p[n+1];
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }

    int ans = 0;
    for(int i = 2; i < n; i++){
        if((p[i-1] <= p[i] && p[i] <= p[i+1]) ||
             (p[i+1] <= p[i] && p[i] <= p[i-1])){
                 ans++;
        }
    }

    cout << ans << endl;
    return 0;
}