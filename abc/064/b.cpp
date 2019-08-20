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
    int n;
    cin >> n;
    int a = 0;
    int b = 1001;
    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        a = max(a, c);
        b = min(b, c);
    }
    cout << a - b << endl;
    return 0;
}
