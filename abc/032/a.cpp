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
    int a, b, n;
    cin >> a >> b >> n;
    while(true){
        if(n % a == 0 && n % b == 0){
            cout << n << endl;
            break;
        } else {
            n++;
        }
    }
    return 0;
}
