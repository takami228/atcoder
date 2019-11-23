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

void print_ans(bool flag){
    if(flag){
        cout << "SAME" << endl;
    } else {
        cout << "DIFFERENT" << endl;
    }   
}

int main(){
    string s;
    cin >> s;
    print_ans(s[0] == s[1] && s[1] == s[2] && s[2] == s[3]);
    return 0;
}
