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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((abs(a-b) <= d && abs(b-c) <= d) || abs(a-c) <= d){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
