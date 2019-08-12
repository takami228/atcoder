#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    int ans = 1000;
    for(int i = 0; i <= str.size()-3; i++){
        int s = (str[i] - '0')*100 + (str[i+1] - '0')*10 + (str[i+2] - '0');
        ans = min(ans, abs(753 - s));
    }
    cout << ans << endl;
    return 0;
}