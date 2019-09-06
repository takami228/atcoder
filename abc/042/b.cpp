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
    int n, l;
    cin >> n >> l;
    vector<string> v;
    string str;
    for(int i = 0; i < n; i++){
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
    cout << endl;
    return 0;
}
