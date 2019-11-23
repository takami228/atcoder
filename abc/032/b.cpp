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
    string str;
    int k;
    cin >> str >> k;
    set<string> pass;
    if(str.size() >= k){
        for(int i = 0; i <= str.size()-k; i++){
            string p = str.substr(i, k);
            pass.insert(p);
        }
        cout << pass.size() << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
