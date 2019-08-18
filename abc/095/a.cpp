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
    string s;
    cin >> s;
    int ans = 700;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'o'){
            ans += 100;
        }
    }
    cout << ans << endl;
    return 0;
}
