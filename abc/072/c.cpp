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
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int r = 0;
    for(int l = 0; l < v.size(); l++){
        while(r < v.size() && v[r] <= v[l] + 2){
            r++;
        }
        ans = max(ans, r-l);
        if(l == r){
            r++;
        }
    }
    cout << ans << endl;
    return 0;
}
