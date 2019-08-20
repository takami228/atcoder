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
    int n;
    cin >> n;
    ll a;
    int x = 0;
    int y = 0;
    int z = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a % 4 == 0){
            x++;
        } else if(a % 2 == 0){
            y++;
        } else {
            z++;
        }
    }
    print_ans((x >= z) || ((x == z - 1) && (y == 0)));
    return 0;
}
