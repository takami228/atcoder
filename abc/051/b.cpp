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
    int k, s;
    cin >> k >> s;
    int ans = 0;
    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int z = s - x - y;
            if(z >= 0 && z <= k){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
