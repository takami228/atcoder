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

void print_ans(bool flag, string y, string n){
    if(flag){
        cout << y << endl;
    } else {
        cout << n << endl;
    }   
}

int main(){
    string s, t;
    cin >> s >> t;
    bool ans = (s[0] == t[2]) && (s[1] == t[1]) && (s[2] == t[0]);
    print_ans(ans, "YES", "NO");  
    return 0;
}
