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
    int diff = b - a;
    int b_actual = 0;
    for(int i = 1; i <= diff; i++){
        b_actual += i;
    }
    cout << b_actual - b << endl;
    return 0;
}
