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

int main(){
    char a, b;
    cin >> a >> b;
    if(a == 'H'){
        if(b == 'H'){
            cout << 'H' << endl;
        } else {
            cout << 'D' << endl;
        }
    } else {
        if(b == 'H'){
            cout << 'D' << endl;
        } else {
            cout << 'H' << endl;
        }
    }
    return 0;
}
