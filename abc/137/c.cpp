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
    int n;
    cin >> n;
    string s[n];
    map<string, long long> map;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        vector<char> c;
        for(int j = 0; j < s[i].size(); j++){
            c.push_back(s[i][j]);
        }
        sort(c.begin(), c.end());
        string sorted = "";
        for(int j = 0; j < c.size(); j++){
            sorted += c[j];
        }
        if(map.count(sorted) == 0){
            map[sorted] = 1;
        } else {
            map[sorted]++;
        }
    }
    long long ans = 0;
    for( auto i = map.begin(); i != map.end() ; ++i ) {
        long long a = i->second;
        ans += a*(a-1)/2;
    }
    cout << ans << endl;
    return 0;
}