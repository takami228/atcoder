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
    int n, k;
    cin >> n >> k;
    if(n % k == 0){
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}
