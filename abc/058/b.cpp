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
    string o, e;
    cin >> o >> e;
    string ans = "";
    for(int i = 0; i < e.size(); i++){
        ans += o[i];
        ans += e[i];
    }
    if(o.size() != e.size()){
        ans += o[o.size() - 1];
    }
    cout << ans << endl;
    return 0;
}
