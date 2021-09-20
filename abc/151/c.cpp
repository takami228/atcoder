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
    cin >> n >> m;
    int ac[n+1];
    int wa[n+1];
    bool isAC[n+1];
    for(int i = 1; i <= n; i++){
        ac[i] = 0;
        wa[i] = 0;
        isAC[i] = false;
    }
    for(int i = 1; i <= m; i++){
        int p;
        string res;
        cin >> p >> res;
        if(ac[p] == 1){
            continue;
        }
        if(res == "WA"){
            wa[p]++;
        }
        if(res == "AC"){
            ac[p] = 1;
        }
    }
    int a = 0;
    int w = 0;
    for(int i = 1; i <= n; i++){
        if(ac[i] == 1){
            a += ac[i];
            w += wa[i];
        }
    }
    cout << a << " " << w << endl;
    return 0;
}
