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
    string s;
    uint64_t dp[100100][13];

    cin >> s;
    const uint64_t n = s.size();

    dp[0][0] = 1;
    for (uint64_t i = 0; i < n; ++i) {
        const uint64_t c = (s[i] == '?') ? 100 : s[i] - '0';
        for (uint64_t k = 0; k < 13; ++k) {
            dp[i+1][k] = 0;
        }
        for (uint64_t j = 0; j < 10; ++j) {
            if (c != 100 && c != j) continue;
            for (uint64_t k = 0; k < 13; ++k) {
                dp[i+1][(10 * k + j) % 13] += dp[i][k];
                dp[i+1][(10 * k + j) % 13] %= 1000000007;
            }
        }
    }

    cout << dp[n][5] << endl;

    return 0;
}