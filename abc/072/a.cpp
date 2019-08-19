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
    long x, t;
    cin >> x >> t;
    cout << max(0L, x-t) << endl;
    return 0;
}
