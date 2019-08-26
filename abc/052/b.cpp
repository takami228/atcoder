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
    string s;
    cin >> n >> s;
    int x = 0;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'I'){
            x++;
            ans = max(ans, x);
        } else {
            x--;
        }
    }
    cout << ans << endl;
    return 0;
}
