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
    long long a, b;
    int k;
    cin >> a >> b >> k;
    vector<long long> v;
    for(long long i = a; i < min(a+k,b); i++){
        v.push_back(i);
    }
    for(long long i = b; i > max(b-k,a); i--){
        v.push_back(i);        
    }
    if(a == b){
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}
