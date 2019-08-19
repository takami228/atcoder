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
    bool ans = false;
    for(int i = 0; i < s.size(); i++){
        ans |= s[i] == '9';
    }
    print_ans(ans);
    return 0;
}
