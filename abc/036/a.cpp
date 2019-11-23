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
    int a, b;
    cin >> a >> b;
    int ans = b / a;
    if(b % a != 0){
        ans++;
    }
    cout << ans << endl;
    return 0;
}
