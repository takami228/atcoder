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
    int n;
    cin >> n;
    vector<ll> a;
    vector<ll> b;
    for(int i = 1; i <= n; i++){
        ll x;
        cin >> x;
        if(i % 2 == 1){
            a.push_back(x);
        } else {
            b.push_back(x);
        }
    }
    if(n % 2 == 0){
        reverse(b.begin(), b.end());
        for(int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
    } else {
        reverse(a.begin(), a.end());
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
        for(int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
