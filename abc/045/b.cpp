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
    string a, b, c;
    cin >> a >> b >> c;
    char turn = 'a';
    char ans;
    while(true){
        if(turn == 'a'){
            if(a.size() == 0){
                ans = 'A';
                break;
            } else {
                turn = a[0];
                a = a.substr(1);
            }
        } else if(turn == 'b'){
            if(b.size() == 0){
                ans = 'B';
                break;
            } else {
                turn = b[0];
                b = b.substr(1);
            }
        } else {
            if(c.size() == 0){
                ans = 'C';
                break;
            } else {
                turn = c[0];
                c = c.substr(1);
            }
        } 
    }
    cout << ans << endl;
    return 0;
}
