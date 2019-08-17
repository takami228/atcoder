#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int dpr[n];
    int dpl[n];
    dpr[0] = 0;
    dpl[n-1] = 0;
    for(int i = 0; i < n-1; i++){
        if(s[i] == 'W'){
            dpr[i+1] = dpr[i]+1;
        } else {
            dpr[i+1] = dpr[i];
        }
    }
    for(int i = n-1; i >=1; i--){
        if(s[i] == 'E'){
            dpl[i-1] = dpl[i]+1;
        } else {
            dpl[i-1] = dpl[i];
        }
    }
    int ans = min(dpr[n-1], dpl[0]);
    for(int i = 1; i < n-2; i++){
        ans = min(ans, dpr[i]+dpl[i]);
    }
    cout << ans << endl;
    return 0;
}
