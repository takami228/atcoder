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
    long long n;
    cin >> n;
    string s = to_string(n);
    long long m = 0;
    for(int i = 0; i < s.size(); i++){
        m += s[i] - '0';
    }
    if(n % m == 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
