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
    string str;
    cin >> str;
    int n = str.size();
    long long dp[100005][13];
    dp[0][0] = 1;
    for(int i = 0; i < n; i++){
        int c;
        if(str[i] == '?'){
            c = -1;
        } else {
            c = str[i] - '0';
        }
        for(int j = 0; j < 10; j++){
            if(c != -1 && c != j){
                continue;
            }
            for(int k = 0; k < 13; k++){
                dp[i+1][(k*10 + j)%13] += dp[i][k];
            }
        }
        for(int j = 0; j < 13; j++){
            dp[i+1][j] %= 1000000007;
        }
    }
    cout << dp[n][5] << endl;
    return 0;
}