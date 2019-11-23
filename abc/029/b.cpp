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
    int ans = 0;
    for(int i = 0; i < 12; i++){
        cin >> str;
        if(str.find('r') != string::npos){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
