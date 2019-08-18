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
    int a, b, c;
    cin >> a >> b >> c;
    int m = a + b + c;
    if(a == b && b == c){
        cout << 0 << endl;
    } else {
        int ans = 0;
        if(m % 2 == 0){
            while(true){
                ans++;
                m += 2;
                if(m % 3 == 0 && m % 2 == 0
                && a <= m/3 && b <= m/3 && c <= m/3){
                    break;
                }
            }
        } else {
            while(true){
                ans++;
                m += 2;
                if(m % 3 == 0 && m % 2 == 1 
                && a <= m/3 && b <= m/3 && c <= m/3){
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
