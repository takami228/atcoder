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
    int a, b, c;
    cin >> a >> b >> c;
    bool ans = ((a+b) == c) || ((a+c) == b) || ((b+c) == a);
    print_ans(ans);
    return 0;
}
