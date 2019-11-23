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
    int l, h, n;
    cin >> l >> h >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] > h){
            cout << -1 << endl;
        } else if(a[i] >= l){
            cout << 0 << endl;
        } else {
            cout << l - a[i] << endl;
        }
    }
    return 0;
}
