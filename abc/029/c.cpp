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

void f(int rest, string str){
    if(rest == 0){
        cout << str << endl;
    } else {
        f(rest - 1,  str + "a");
        f(rest - 1,  str + "b");
        f(rest - 1,  str + "c");
    }
}

int main(){
    int n;
    cin >> n;
    f(n, "");
    return 0;
}
