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
    ll a;
    cin >> a;
    if(a % 2 == 0){
        cout << a -1 << endl;
    } else {
        cout << a + 1 << endl;
    }
    return 0;
}
