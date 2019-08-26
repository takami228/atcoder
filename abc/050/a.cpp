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

int main(){
    ll a, b;
    char op;
    cin >> a >> op >> b;
    if(op == '+'){
        cout << a + b << endl;
    } else {
        cout << a - b << endl;
    }
    return 0;
}
