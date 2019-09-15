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
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }   
}

int main(){
    string s;
    cin >> s;
    bool ans = true;
    for(int i = 1; i <= s.size(); i++){
        if(i % 2 == 1){
            ans &= (s[i-1] == 'R' || s[i-1] == 'U' || s[i-1] == 'D');
        } else {
            ans &= (s[i-1] == 'L' || s[i-1] == 'U' || s[i-1] == 'D');
        }
    }
    print_ans(ans);
    return 0;
}
