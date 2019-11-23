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
    if(n % 2 == 0){
        cout << 0.5 << endl;
    } else {
        cout << (double)(n/2 + 1)/(double)(n) << endl;
    }
    return 0;
}
