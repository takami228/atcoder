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
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        string str = to_string(i);
        if(str.size() % 2 == 1){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}