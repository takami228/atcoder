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
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool ans = true;
    for(int i = 0; i < a; i++){
        ans &= (s[i] >= '0' && s[i] <= '9');
    }
    ans &= s[a] == '-';
    for(int i = a+1; i < a+b+1; i++){
        ans &= (s[i] >= '0' && s[i] <= '9');
    }
    if(ans){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
