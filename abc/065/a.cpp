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
    ll x, a, b;
    cin >> x >> a >> b;
    if(a >= b){
        cout << "delicious" << endl;
    } else if((a + x) >= b && a < b){
        cout << "safe" << endl;
    } else {
        cout << "dangerous" << endl;
    }
    return 0;
}
