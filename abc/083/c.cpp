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
    long x, y, z;
    cin >> x >> y;
    z = y / x;
    int count = 0;
    while(z > 0){
        z /= 2;
        count++;
    }
    cout << count << endl;
    return 0;
}
