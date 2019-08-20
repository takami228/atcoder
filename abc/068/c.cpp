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

void print_ans(bool flag){
    if(flag){
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }   
}

int main(){
    int n, m;
    cin >> n >> m;
    int count[n+1];
    for(int i = 1; i <= n; i++){
        count[i] = 0;
    }
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        if(a == 1){
            count[b]++;
        } else if(b == n){
            count[a]++;            
        }
    }
    bool ans = false;
    for(int i = 2; i <= n-1; i++){
        if(count[i] == 2){
            ans = true;
            break;
        }
    }
    print_ans(ans);
    return 0;
}
