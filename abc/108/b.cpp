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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = c - a;
    int y = d - b;
    cout << c - y << " " << d + x << " " << a - y << " " << b + x << endl;
}
