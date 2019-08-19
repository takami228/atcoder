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

bool comp1(const char& a, const char& b){
    return a < b;
}

bool comp2(const char& a, const char& b){
    return a > b;
}

int main(){
    string s, t;
    cin >> s >> t;
    sort(begin(s), end(s), comp1);
    sort(begin(t), end(t), comp2);
    if(s < t) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
