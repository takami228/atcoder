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
    int ans = 0;
    for(int i = 0; i < n; i++){
        int r, l;
        cin >> r >> l;
        for(int j = r; j <= l; j++){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
