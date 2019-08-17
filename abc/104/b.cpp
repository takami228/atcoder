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
    bool ans = true;
    ans &= (s[0] == 'A');
    int count = 0;
    for(int i = 2; i <= s.size()-2; i++){
        if(s[i] == 'C'){
            count++;
        }
    }
    ans &= (count == 1);
    bool isLower = true;
    for(int i = 0; i < s.size(); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || s[i] == 'A' || s[i] == 'C'){
            continue;
        } else {
            isLower = false;
        }
    }
    ans &= isLower;
    if(ans){
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }
    return 0;
}
