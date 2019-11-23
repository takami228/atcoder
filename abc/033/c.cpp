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
#include <sstream>
using namespace std;
using ll = long long;

vector<string> string_split(const string &str, char sep){
    vector<string> v;
    stringstream ss(str);
    string buffer;
    while( getline(ss, buffer, sep) ) {
        v.push_back(buffer);
    }
    return v;
}

int main(){
    string str;
    cin >> str;
    vector<string> v = string_split(str, '+');
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i].find('0') == string::npos){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
