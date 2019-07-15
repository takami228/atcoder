#include <iostream>
using namespace std;

long long a[20];

long long dfs(int l, int r, int lx, int rx){
    if(l + 1 == r){
        return 0;
    }
    long long res = 200000000000000;
    for(int k = l+1; k < r; k++){
        res = min(res, dfs(l, k, lx, lx + rx) + dfs(k, r, lx + rx, rx) + a[k]*(lx+rx));
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << dfs(0, n-1, 1, 1) + a[0] + a[n-1] << endl;
}