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
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] != s[i+1]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
