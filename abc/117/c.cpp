#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> x;
    int tmp;
    for(int i = 0; i < m; i++){
        cin >> tmp;
        x.push_back(tmp);
    }
    sort(x.begin(), x.end());
    long long ans = 0;
    if(n >= m){
        ans = 0;
    } else {
        vector<int> diff;
        for(int i = 1; i < m; i++){
            diff.push_back(x[i] - x[i-1]);
        }
        sort(diff.begin(), diff.end());
        for(int i = 0; i < m - n; i++){
            ans += diff[i];
        }
    }
    cout << ans << endl;
    return 0;
}