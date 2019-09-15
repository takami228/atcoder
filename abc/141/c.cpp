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
    ll n, q;
    ll k;
    cin >> n >> k >> q;
    ll ans[n];
    ll a;
    for(int i = 0; i < n; i++){
        ans[i] = k - q;
    }
    for(int i = 0; i < q; i++){
        cin >> a;
        ans[a-1]++;
    }
    for(int i = 0; i < n; i++){
        print_ans(ans[i] > 0);
    }
    return 0;
}
