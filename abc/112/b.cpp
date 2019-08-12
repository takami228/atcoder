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
    int n, t;
    cin >> n >> t;
    int ans = 1001;
    for(int i = 0; i < n; i++){
        int c, ct;
        cin >> c >> ct;
        if(ct <= t){
            ans = min(ans, c);
        }
    }
    if(ans == 1001){
        cout << "TLE" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}