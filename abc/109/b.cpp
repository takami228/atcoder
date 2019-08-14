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
    int n;
    cin >> n;
    vector<string> s;
    set<string> t;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        s.push_back(str);
        t.insert(str);
    }
    bool flag = true;
    for(int i = 1; i < n; i++){
        flag &= (s[i-1].at(s[i-1].size()-1) == s[i].at(0));
    }
    if(flag && n == t.size()){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}