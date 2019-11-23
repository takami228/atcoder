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
        cout << "Better" << endl;
    } else {
        cout << "Worse" << endl;
    }   
}

int main(){
    int a, b;
    cin >> a >> b;
    print_ans(a < b);
    return 0;
}
