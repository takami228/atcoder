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
        cout << "4:3" << endl;
    } else {
        cout << "16:9" << endl;
    }   
}


int main(){
    int w, h;
    cin >> w >> h;
    print_ans(h*4/w == 3);
    return 0;
}
