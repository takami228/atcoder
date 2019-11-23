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
    int n, m;
    cin >> n >> m;
    if(n >= 12){
        n -= 12;
    }
    double arc_n = 30*n + 30.0 * m / 60.0;
    double arc_m = 6.0 * m;
    if(arc_n > arc_m){
        cout << min((arc_n - arc_m), 360 - (arc_n - arc_m)) << endl;
    } else {
        cout << min((arc_m - arc_n), 360 - (arc_m - arc_n)) << endl;
    }
    return 0;
}
