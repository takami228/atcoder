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
    int a, b, x;
    cin >> a >> b >> x;
    if(a + b - x >= 0 && a <= x){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
