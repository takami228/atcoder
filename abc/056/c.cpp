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
    ll x;
    cin >> x;
    for(ll i = 1; i <= 2*sqrt(x); i++){
        ll t = i*(i+1)/2;
        if(x <= t){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
