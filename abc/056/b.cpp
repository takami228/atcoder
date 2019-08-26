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
    int w, a, b;
    cin >> w >> a >> b;
    int c = min(a, b);
    int d = max(a, b);
    cout << max(0, d - (c+w)) << endl;
    return 0;
}
