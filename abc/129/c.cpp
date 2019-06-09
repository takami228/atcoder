#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    long long ans[100001];
    bool isBroken[100001];
    for(int i = 0; i <= n; i++){
        isBroken[i] = false;
        ans[i] = 0;
    }
    int a = 0;
    for(int i = 1; i <= m; i++){
        cin >> a;
        isBroken[a] = true;
    }
    ans[0] = 1;
    if(!isBroken[1]){
        ans[1] = 1;
    } else {
        ans[1] = 0;
    }
    for(int i = 2; i <= n; i++){
        if(!isBroken[i-1] && !isBroken[i-2]){
            ans[i] = ans[i-1] + ans[i-2];
        } else if(!isBroken[i-1] && isBroken[i-2]){
            ans[i] = ans[i-1];
        } else if(isBroken[i-1] && !isBroken[i-2]){
            ans[i] = ans[i-2];
        }
        ans[i] %= 1000000007;
    }
    cout << ans[n] << endl;
}