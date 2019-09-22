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
    string s, t;
    cin >> s >> t;
    int ans = 0;
    if(s[0] == t[0]){
        ans++;
    }
    if(s[1] == t[1]){
        ans++;
    }
    if(s[2] == t[2]){
        ans++;
    }
    cout << ans << endl;
    return 0;
}
