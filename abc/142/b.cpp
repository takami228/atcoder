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
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int ki;
        cin >> ki;
        if(ki >= k){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
