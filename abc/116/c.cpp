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
    int n;
    cin >> n;
    int h[n+1];
    for(int i = 1; i <= n; i++){
        cin >> h[i];
    }
    int ans = 0;
    while(true){
        int l = -1;
        int r = -1;
        for(int i = 1; i <= n; i++){
            if(h[i] != 0){
                l = i;
                break;
            }
        }
        if(l == -1){
            break;
        }
        for(int i = l; i <= n; i++){
            if(h[i] == 0){
                break;
            } else {
                r = i;
            }
        }
        for(int i = l; i <= r; i++){
            h[i]--;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}