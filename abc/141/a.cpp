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
    string s, ans;
    cin >> s;
    if(s == "Sunny"){
        ans = "Cloudy";
    } else if(s == "Cloudy"){
        ans = "Rainy";
    } else {
        ans = "Sunny";
    }
    cout << ans << endl;
    return 0;
}
