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
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }   
}

int main(){
    string s;
    cin >> s;
    sort(begin(s), end(s));
    bool ans = true;
    for(int i = 1; i < s.size(); i++){
        ans &= (s[i] != s[i-1]);
    }
    print_ans(ans);
    return 0;
}
