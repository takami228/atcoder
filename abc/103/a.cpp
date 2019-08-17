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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 301;
    ans = min(ans, abs(a-b)+abs(b-c));
    ans = min(ans, abs(a-c)+abs(c-b));
    ans = min(ans, abs(b-a)+abs(a-c));
    ans = min(ans, abs(b-c)+abs(c-a));
    ans = min(ans, abs(c-a)+abs(a-b));
    ans = min(ans, abs(c-b)+abs(b-a));
    cout << ans << endl;
    return 0;
}
