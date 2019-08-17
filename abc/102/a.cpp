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
    if(n % 2 == 0){
        cout << n << endl;
    } else {
        cout << 2*n << endl;
    }
    return 0;
}
