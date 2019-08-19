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
    for(int i = 0; i < s.size(); i+=2){
        cout << s[i];
    }
    cout << endl;
    return 0;
}
