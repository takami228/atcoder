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
    string ans = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            ans.push_back('0');
        } else if(s[i] == '1'){
            ans.push_back('1');
        } else {
            if(ans.size() != 0){
                ans.pop_back();
            }
        }
    }
    cout << ans << endl;
    return 0;
}
