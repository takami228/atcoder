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
    int n;
    cin >> n;
    bool flag = false;
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        if(c == 'Y'){
            flag = true;
        }
    }
    if(flag){
        cout << "Four" << endl;
    } else {
        cout << "Three" << endl;
    }
    return 0;
}
