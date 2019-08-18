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
    string s;
    cin >> s;
    sort(begin(s), end(s));
    if(s == "abc"){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
