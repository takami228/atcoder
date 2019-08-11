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
    int a, b;
    cin >> a >> b;
    if(b % a == 0){
        cout << a + b << endl;
    } else {
        cout << b - a << endl;
    }
    return 0;
}