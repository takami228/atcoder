#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1'){
            cout << "9";
        } else if(str[i] == '9'){
            cout << "1";
        } else {
            cout << str[i];
        }
    }
    cout << endl;
    return 0;
}