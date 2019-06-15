#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, Q;
    string S = "";
    cin >> N >> Q >> S;
    int l[Q];
    int r[Q];
    for(int i = 0; i < Q; i++){
        cin >> l[i] >> r[i];
    }
    int dp[N][N];
    for(int i = 0; i < N; i++){
        dp[i][i] = 0;
        if(S.at(i) == 'A' && S.at(i+1) == 'C'){
            dp[i][i+1] = 1;
        } else {
            dp[i][i+1] = 0;
        }
        for(int j = i+2; j < N-2; j++){
            if(S.at(j) == 'A' && S.at(j+1) == 'C'){
                dp[i][j] = dp[i][j-2];
                dp[i][j+1] = dp[i][j-1] + 1;
            } else {
                dp[i][j] = dp[i][j-2];
                dp[i][j+1] = dp[i][j-1];
            }
        }
    }
    for(int i = 0; i < Q; i++){
        cout << dp[l[i]-1][r[i]-1] << endl;
    }
    for(int i = 0; i < S.size(); i++){
        for(int j = i+1; j < S.size(); j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}