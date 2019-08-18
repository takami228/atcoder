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
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for(int i = a; i <= b; i++){
        string str = to_string(i);
        if(str[0] == str[4] && str[1] == str[3]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
