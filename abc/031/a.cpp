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
    int a, d;
    cin >> a >> d;
    cout << max((a+1)*d, a*(d+1)) << endl;
    return 0;
}
