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
    int a, b;
    cin >> a >> b;
    cout << max(a+b, max(a-b, a*b)) << endl;
    return 0;
}