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
    int x;
    cin >> x;
    int ans = 1;
    for(int i = 2; i <= 10; i++){
        for(int j = 1; pow(j,i) <= x; j++){
            ans = max(ans, (int)pow(j,i));
        }
    }
    cout << ans << endl;
    return 0;
}
