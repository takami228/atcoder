#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = (double)(x2 - x1);
    double b = (double)(y2 - y1);
    double c = (double)(x3 - x1);
    double d = (double)(y3 - y1);
    double s = abs(a*d - b*c)*0.5;
    double ans = floor(s*100)/100.0;
    cout << ans << endl;
}