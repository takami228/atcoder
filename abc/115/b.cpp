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
    int n;
    cin >> n;
    int cost = 0;
    int m = 0;
    int p = 0;
    for(int i = 0; i < n; i++){
        cin >> p;
        cost += p;
        m = max(m, p);
    }
    cost -= m / 2;
    cout << cost << endl;
    return 0;
}