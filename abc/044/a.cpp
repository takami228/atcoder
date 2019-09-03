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
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    cout << min(k, n)*x + (max(0, n-k))*y << endl;
    return 0;
}
