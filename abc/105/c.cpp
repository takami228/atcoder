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
    long long n;
    cin >> n;
    string ans = "";
    vector<long long> k;
    long long t = 1;
    k.push_back(t);
    while(true){
        t *= -2;
        if(n / t == 0){
            break;
        }
        k.push_back(t);
    }
    long long m = n;
    for(int i = k.size()-1; i >= 0; i--){
        if(m / k[i] == 1){
            ans += "1";
            m -= k[i];
        } else {
            ans += "0";
        }
    }
    cout << ans << endl;
    return 0;
}
