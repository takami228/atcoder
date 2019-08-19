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
    bool c[26];
    for(int i = 0; i < 26; i++){
        c[i] = false;
    }
    for(int i = 0; i < s.size(); i++){
        c[s[i] - 'a'] = true;
    }
    int index = -1;
    for(int i = 0; i < 26; i++){
        if(!c[i]){
            index = i;
            break;
        }
    }
    if(index != -1){
        cout << (char)('a' + index) << endl;
    } else {
        cout << "None" << endl;
    }
    return 0;
}
