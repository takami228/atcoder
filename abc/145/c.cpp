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
    int n;
    cin >> n;
    double f[n][2];
    double d[n][n];
    for(int i = 0; i < n; i++){
        cin >> f[i][0] >> f[i][1];
    }
    double ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            d[i][j] = sqrt((f[i][0] - f[j][0])*(f[i][0] - f[j][0]) + (f[i][1] - f[j][1])*(f[i][1] - f[j][1]));
            ans += d[i][j];
        }
    }
    cout << setprecision(12) << 2*ans / n << endl;
    return 0;
}
