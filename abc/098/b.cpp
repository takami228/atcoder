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

map<char, int> str_to_map(vector<char> c){
    map<char, int> res;
    for(int i = 0; i < c.size(); i++){
        res[c[i]]=1; 
    }
    return res;
}

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = -1;
    for(int i = 0; i < s.size()-1; i ++){
        vector<char> x;
        vector<char> y;
        for(int j = 0; j < i+1; j++){
            x.push_back(s[j]);
        }
        for(int j = i+1; j < s.size(); j++){
            y.push_back(s[j]);
        }
        map<char, int> x_map = str_to_map(x);
        map<char, int> y_map = str_to_map(y);
        int sum = 0;
        for(auto elm = x_map.begin(); elm != x_map.end() ; ++elm){
            char key = elm->first;
            sum += min(x_map[key], y_map[key]);
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
