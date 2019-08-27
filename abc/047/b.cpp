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
using ll = long long;

int main(){
    int w, h, n;
    cin >> w >> h >> n;
    int x, y, z;
    int a = 0;
    int b = w;
    int c = 0;
    int d = h;

    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;
        if(z == 1){
            a = max(a, x);
        } else if(z == 2){
            b = min(b, x);
        } else if(z == 3){
            c = max(c, y);
        } else {
            d = min(d, y);            
        }
    }

    if(a >= b || c >= d){
        cout << 0 << endl;
    } else {
        cout << (b - a)*(d - c) << endl;
    }
    return 0;
}
