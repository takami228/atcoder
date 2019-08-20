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
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }   
}

int main(){
    int x, y;
    cin >> x >> y;
    int a[12] = {1,3,1,2,1,2,1,1,2,1,2,1};
    print_ans(a[x-1] == a[y-1]);
    return 0;
}
