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
    int n, k, m;
    cin >> n >> k >> m;
    int sum = 0;
    int desired = n*m;
    for(int i = 0; i < n-1; i++){
        int a;
        cin >> a;
        sum += a;
    }
    int res = desired - sum;
    if(res < 0){
        cout << 0 << endl;
    } else if(res > k){
        cout << -1 << endl;
    } else {
        cout << res << endl;
    }
    return 0;
}
