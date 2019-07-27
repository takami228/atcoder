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
    long long a, b;
    cin >> a >> b;
    long long A = min(a, b);
    long long B = max(a, b);
    if((A+B)%2 == 0){
        cout << (A+B)/2 << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}