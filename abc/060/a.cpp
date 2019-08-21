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
    string a, b, c;
    cin >> a >> b >> c;
    print_ans(a[a.size()-1] == b[0] && b[b.size()-1] == c[0]);
    return 0;
}
