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
    int a, b;
    cin >> a >> b;
    if(a <= b){
        cout << a << endl;
    } else {
        cout << a-1 << endl;
    }
    return 0;
}
