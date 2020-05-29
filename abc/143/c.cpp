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
    int n;
    string str;
    cin >> n >> str;
    int ans = 1;
    char c = str.at(0);
    for(int i = 1; i < n; i++){
        if(c == str.at(i)){
            continue;
        } else {
            ans++;
            c = str.at(i);
        }
    }
    cout << ans << endl;
    return 0;
}
