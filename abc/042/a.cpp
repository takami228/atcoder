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
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }   
}

int main(){
    int a;
    int go = 0;
    int nana = 0;
    for(int i = 0; i < 3; i++){
        cin >> a;
        if(a == 5){
            go++;
        } else if(a == 7){
            nana++;
        }
    }
    print_ans(go == 2 && nana == 1);
    return 0;
}
