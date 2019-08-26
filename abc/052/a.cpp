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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(a*b, c*d) << endl;
    return 0;
}
