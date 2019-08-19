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
    int a = s[0] - '0';
    int b = s[1] - '0';
    int c = s[2] - '0';
    int d = s[3] - '0';
    if(a + b + c + d == 7){
        cout << s[0] << "+" << s[1] << "+" << s[2] << "+" << s[3];
    } else if(a + b + c - d == 7){
        cout << s[0] << "+" << s[1] << "+" << s[2] << "-" << s[3];
    } else if(a + b - c + d == 7){
        cout << s[0] << "+" << s[1] << "-" << s[2] << "+" << s[3];
    } else if(a + b - c - d == 7){
        cout << s[0] << "+" << s[1] << "-" << s[2] << "-" << s[3];
    } else if(a - b + c + d == 7){
        cout << s[0] << "-" << s[1] << "+" << s[2] << "+" << s[3];
    } else if(a - b + c - d == 7){
        cout << s[0] << "-" << s[1] << "+" << s[2] << "-" << s[3];
    } else if(a - b - c + d == 7){
        cout << s[0] << "-" << s[1] << "-" << s[2] << "+" << s[3];
    } else if(a - b - c - d == 7){
        cout << s[0] << "-" << s[1] << "-" << s[2] << "-" << s[3];
    }
    cout << "=7" << endl;
    return 0;
}
