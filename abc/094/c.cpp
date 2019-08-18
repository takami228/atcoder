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

int main(){
    int n;
    cin >> n;
    vector<long long> v;
    long long y;
    long long x[n];
    for(int i = 0; i < n; i++){
        cin >> y;
        x[i] = y;
        v.push_back(x[i]);
    }
    sort(v.begin(), v.end());
    long long a = v[n/2 - 1];
    long long b = v[n/2];
    for(int i = 0; i < n; i++){
        if(x[i] <= a){
            cout << b << endl;
        } else {
            cout << a << endl;
        }
    }
    return 0;
}
