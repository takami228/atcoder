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
    string a, b;
    cin >> a >> b;
    string ans ="";
    if(a.size() < b.size()){
        ans = "LESS";
    } else if(a.size() > b.size()){
        ans = "GREATER";
    } else {
        bool flag = true;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == b[i]){
                continue;
            } else {
                if(a[i] < b[i]){
                    ans = "LESS";
                } else {
                    ans = "GREATER";
                }
                flag = false;
                break;
            }
        }
        if(flag){
            ans = "EQUAL";
        }
    }
    cout << ans << endl;
    return 0;
}
