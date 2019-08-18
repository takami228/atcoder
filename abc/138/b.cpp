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
    double a;
    double bunbo;
    for(int i = 0; i < n; i++){
        cin >> a;
        bunbo += 1.0 / a;
    }
    cout << setprecision(12) << 1.0 / bunbo << endl;
    return 0;
}
