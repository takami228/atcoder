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
    int n;
    string str;
    cin >> n >> str;
    if(n % 2 != 0){
        cout << "No" << endl;
    } else {
        string t1 = str.substr(0, n/2);
        string t2 = str.substr(n/2, n/2);
        if(t1 == t2){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
