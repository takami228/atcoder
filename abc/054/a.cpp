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
    int a, b;
    cin >> a >> b;
    if(a == b){
        cout << "Draw" << endl;
    } else {
        if(a == 1){
            cout << "Alice" << endl;            
        } else if(b == 1){
            cout << "Bob" << endl;            
        } else {
            if(a > b){
                cout << "Alice" << endl;            
            } else {
                cout << "Bob" << endl;
            }
        }
    }
    return 0;
}
