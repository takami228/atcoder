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

bool contains(vector<int> v, int target){
    return find(v.begin(), v.end(), target) != v.end();
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> d;
    int a;
    for(int i = 0; i < k; i++){
        cin >> a;
        d.push_back(a);
    }
    int m = n;
    while(true){
        string s = to_string(m);
        vector<int> l;
        for(int i = 0; i < s.size(); i++){
            int c = s[i] - '0';
            l.push_back(c);
        }
        sort(l.begin(), l.end());
        l.erase(unique(l.begin(), l.end()), l.end());
        bool ans = true;
        for(int i = 0; i < l.size(); i++){
            ans &= !contains(d, l[i]);
        }
        if(ans){
            break;
        }
        m++;
    }
    cout << m << endl;
    return 0;
}
