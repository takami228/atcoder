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
    int a, b, c;
    cin >> a >> b >> c;
    cout << c / min(a, b) << endl;
    return 0;
}
