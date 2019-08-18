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
    int n, x;
    cin >> n >> x;
    int m[n];
    int m_min = 100001;
    for(int i = 0; i < n; i++){
        cin >> m[i];
        x -= m[i];
        m_min = min(m_min, m[i]);
    }
    int ans = n + x / m_min;
    cout << ans << endl;
    return 0;
}
