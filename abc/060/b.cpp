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
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }   
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    bool ans = false;
    for(int i = a; i <= a*b; i+= a){
        ans |= i % b == c;
    }
    print_ans(ans);
    return 0;
}
