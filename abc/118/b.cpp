#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int suki[m+1];
    for(int i = 1; i <= m; i++){
        suki[i] = 0;
    }
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int a;
            cin >> a;
            suki[a]++;
        }
    }
    int ans = 0;
    for(int i = 1; i <= m; i++){
        if(suki[i] == n){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}