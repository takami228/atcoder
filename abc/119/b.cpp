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
    double ans = 0.0;
    for(int i = 0; i < n; i++){
        double x;
        string u;
        cin >> x >> u;
        if(u == "JPY"){
            ans += x;
        } else {
            ans += x*380000;
        }
    }
    cout << ans << endl;
    return 0;
}