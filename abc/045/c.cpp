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

ll get_ll(char* s, int size) {
    char tmp = s[size];
    s[size] = '\0';
    ll res = atoll(s);
    s[size] = tmp;
    return res;
}

int main(){
    string s;
    cin >> s;
    ll ans = 0LL;
    for (int i=0; i<(1<<(s.size()-1)); i++) {
        int bit = i | (1<<(s.size()-1));
        int prev = -1;
        for (int j=0; j<s.size(); j++) {
            if ((bit>>j)&1) {
                ans += get_ll(&s[prev+1], j-prev);
                prev = j;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
