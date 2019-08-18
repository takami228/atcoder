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
    int n;
    cin >> n;
    int t = 0;
    int x = 0;
    int y = 0;
    bool ans = true;
    for(int i = 0; i < n; i++){
        int t_next, x_next, y_next;
        cin >> t_next >> x_next >> y_next;
        int dt = t_next - t;
        int dx = x_next - x;
        int dy = y_next - y;
        ans &= (dt % 2 == (abs(dx) + abs(dy)) % 2) && (dt >= (abs(dx) + abs(dy)));
        t = t_next;
        x = x_next;
        y = y_next;
    }
    if(ans){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
