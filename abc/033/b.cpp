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
    int n;
    cin >> n;
    string maxCity = "";
    int maxPop = -1;
    ll sumPop = 0;
    for(int i = 0; i < n; i++){
        string nameCity;
        int pop;
        cin >> nameCity >> pop;
        sumPop += pop;
        if(maxPop < pop){
            maxPop = pop;
            maxCity = nameCity;
        }
    }
    if(floorl((double)sumPop/2.0)+1 <= maxPop){
        cout << maxCity << endl;
    } else {
        cout << "atcoder" << endl;
    }
    return 0;
}
