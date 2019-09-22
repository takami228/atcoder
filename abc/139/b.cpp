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
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int plugs = 1;
    while(true){
        if(b <= plugs){
            break;
        } else {
            plugs += a -1;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
