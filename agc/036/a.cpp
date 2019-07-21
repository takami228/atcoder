#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <array>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    long long s;
    cin >> s;
    long x1, y1, x2, y2, x3, y3;
    x1 = 0;
    y1 = 0;
    x2 = 1000000000;
    y2 = 1;
    long x = s % 1000000000;
    long y = s / 1000000000;
    x3 = 1000000000 - x;
    y3 = y + 1;
    if(y3 > 1000000000){
        y3 = y;
        x3 = y*1000000000 - s;
    }
    cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << " " << endl;
    return 0;
}