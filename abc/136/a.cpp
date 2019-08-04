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

int main(){
    int a, b, c;
    cin >> a >> b >>c;
    int ans = c - (a-b);
    if(ans < 0) ans = 0;
    cout << ans << endl;
    return 0;
}