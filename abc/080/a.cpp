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
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(b, a*n) << endl;
    return 0;
}
