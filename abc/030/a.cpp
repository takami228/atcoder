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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(c * b > a * d){
        cout << "TAKAHASHI" << endl;
    } else if(c * b == a * d){
        cout << "DRAW" << endl;
    } else {
        cout << "AOKI" << endl;
    }
    return 0;
}
