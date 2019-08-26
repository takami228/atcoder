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
        cout << "ABC" << endl;
    } else {
        cout << "ARC" << endl;
    }   
}

int main(){
    int x;
    cin >> x;
    print_ans(x < 1200);
    return 0;
}
