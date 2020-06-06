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
using ll = long long;

int main(){
    int n;
    cin >> n;
    string p = "";
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        p += s;
    }
    string q = "";
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        q += s;
    }

    vector<int> v;
    for(int i = 1; i <= n; i++){
        v.push_back(i);
    }
    int count = 1;
    int a = 0;
    int b = 0;
    do {
        string s = "";
        for(int i = 0; i < v.size(); i++){
            s += to_string(v[i]);
        }
        if(s == p){
            a = count;
        }
        if(s == q){
            b = count;
        }
        count++;
    } while( next_permutation(v.begin(), v.end()) );
    cout << abs(a-b) << endl;
    return 0;
}
