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
    int n, m;
    map<string, int> card;
    cin >> n;
    for(int i = 0; i < n; i++){
        string key;
        cin >> key;
        card[key]++;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        string key;
        cin >> key;
        card[key]--;
    }
    int ans = 0;
    for(auto x : card){
        ans = max(ans, x.second);
    }
    cout << ans << endl;
    return 0;
}
