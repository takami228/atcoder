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
    print_ans(a <= c && c <= b);
    return 0;
}
