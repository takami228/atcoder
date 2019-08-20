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
    string s;
    cin >> s;
    int ans = 0;
    if(s.size() % 2 == 0){
        for(int n = s.size() - 2; n >= 0; n-=2){
            string s_sub1 = s.substr(0, n/2);
            string s_sub2 = s.substr(n/2, n/2);
            if(s_sub1 == s_sub2){
                ans = n;
                break;
            }
        }
    } else {
        string t = s.substr(0, s.size()-1);
        for(int n = t.size() - 2; n >= 0; n-=2){
            string t_sub1 = t.substr(0, n/2);
            string t_sub2 = t.substr(n/2, n/2);
            if(t_sub1 == t_sub2){
                ans = n;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
