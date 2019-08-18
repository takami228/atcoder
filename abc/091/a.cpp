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
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b >= c){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
