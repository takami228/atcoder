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

string shift(string s){
    string t = "";
    t += s[s.size()-1];
    for(int i = 0; i < s.size()-1; i++){
        t += s[i];
    }
    return t;
}

int main(){
    string s, t;
    cin >> s >> t;
    string shifted = s;
    bool ans = false;
    for(int i = 0; i < s.size(); i++){
        shifted = shift(shifted);
        ans |= shifted == t;
    }
    if(ans){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
