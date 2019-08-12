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

double d(double a, double b){
    if(a > b){
        return a - b;
    } else {
        return b - a;
    }
}

int main(){
    int n, t;
    double a;
    cin >> n >> t >> a;
    int ans = 0;
    int h = 0;
    double diff = 100001;
    for(int i = 1; i <= n; i++){
        cin >> h;
        double tmp = t - h*0.006;
        double p = d(a, tmp);
        if(diff >= p){
            diff = p;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}