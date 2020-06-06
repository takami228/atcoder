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

ll llmax(ll a, ll b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}

int main(){
    ll a, b, k;
    cin >> a >> b >> k;
    ll resA = llmax(0, a - k);
    ll resB = 0;
    if(resA == 0){
        resB = llmax(0, b - (k - a));
    } else {
        resB = b;
    }
    cout << resA << " " << resB << endl;
    return 0;
}
