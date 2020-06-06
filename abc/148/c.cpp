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

ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    if(a%b==0)return b;
    return gcd(a%b,b);
}
ll lcm(ll a,ll b){
    return a/gcd(a,b)*b;
}

int main(){
    ll a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}
