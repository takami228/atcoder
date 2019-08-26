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
    ll n, m;
    cin >> n >> m;
    if(2*n >= m){
        cout << m / 2 << endl;
    } else {
        cout << n + (m - 2*n)/4 << endl;
    }
    return 0;
}
