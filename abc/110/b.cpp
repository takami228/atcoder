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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int x_max = x;
    int y_min = y;
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        x_max = max(tmp, x_max);
    }
    for(int i = 0; i < m; i++){
        cin >> tmp;
        y_min = min(tmp, y_min);
    }
    if(x_max + 1 <= y_min){
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }
    return 0;
}