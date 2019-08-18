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

int str_to_number(string str){
    int ans = 0;
    for(int i = 0; i < str.size(); i++){
        ans += str[i] - '0';
    }
    return ans;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int sum = str_to_number(to_string(i));
        if(sum >= a && sum <= b){
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}
