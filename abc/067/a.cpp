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

void print_ans(bool flag){
    if(flag){
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }   
}

int main(){
    int a, b;
    cin >> a >> b;
    bool ans = (a % 3 == 0) || (b % 3 == 0) || ((a+b) % 3 == 0);
    print_ans(ans);
    return 0;
}
