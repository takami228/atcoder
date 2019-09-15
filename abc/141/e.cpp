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

int lcs(string s, string t) {
    int n = s.size();
    int m = t.size();
    int dp[n+1][m+1];
    for (int i=0; i < n; ++i) {
        for (int j=0; j < m; ++j) {
            if (s[i] == t[j]) {
                dp[i+1][j+1] = dp[i][j] + 1;
            }
            else {
                dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }
    return dp[n][m];
}

int main(){
    int n;
    string str;
    cin >> n >> str;
    int ans = 0;
    for(int i = 1; i <= n-1; i++){
        string s = str.substr(0, i);
        string t = str.substr(i);
        ans = max(ans, lcs(s, t));
    }
    cout << ans << endl;
    return 0;
}
