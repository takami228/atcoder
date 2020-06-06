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
    string s, t;
    cin >> n >> s >> t;
    for(int i = 0; i < n; i++){
        cout << s.at(i) << t.at(i);
    }
    cout << endl;
    return 0;
}
