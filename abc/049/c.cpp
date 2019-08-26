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

void print_ans(bool flag){
    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }   
}

int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    string t1 = "maerd";
    string t2 = "remaerd";
    string t3 = "esare";
    string t4 = "resare";
    bool ans = false;
    while(true){
        if(s.size() == 0){
            ans = true;
            break;
        }
        if(s.size() < 5){
            ans = false;
             break;
        } else {
            if(s.size() >= 7){
                string sub5 = s.substr(0, 5);
                string sub6 = s.substr(0, 6);
                string sub7 = s.substr(0, 7);
                if(sub5 == t1 || sub5 == t3){
                    string next = s.substr(5);
                    s = next;
                } else if(sub6 == t4) {
                    string next = s.substr(6);
                    s = next;
                } else if(sub7 == t2) {
                    string next = s.substr(7);
                    s = next;
                } else {
                    ans = false;
                    break;
                }
            } else if(s.size() >= 6){
                string sub5 = s.substr(0, 5);
                string sub6 = s.substr(0, 6);
                if(sub5 == t1 || sub5 == t3){
                    string next = s.substr(5);
                    s = next;
                } else if(sub6 == t4) {
                    string next = s.substr(6);
                    s = next;
                } else {
                    ans = false;
                    break;
                }
            } else if(s.size() >= 5){
                string sub5 = s.substr(0, 5);
                if(sub5 == t1 || sub5 == t3){
                    string next = s.substr(5);
                    s = next;
                } else {
                    ans = false;
                    break;
                }
            }
        }
    }
    print_ans(ans);
    return 0;
}
