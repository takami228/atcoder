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

void print_ans(bool flag){
    if(flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }   
}

int main(){
    string s;
    cin >> s;
    bool ans = (s[0] == s[1] && s[0] == s[2] && s[1] == s[2])
     || (s[1] == s[2] && s[1] == s[3] && s[2] == s[3]);
     print_ans(ans);
    return 0;
}
