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
    int n;
    cin >> n;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        ans += a-1;
    }
    cout << ans << endl;
}
