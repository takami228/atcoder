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

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i+=2){
        int yakusu = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                yakusu++;
            }
        }
        if(yakusu == 8){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
