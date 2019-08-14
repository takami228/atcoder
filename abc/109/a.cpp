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
    if(a % 2 != 0 && b % 2 != 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}