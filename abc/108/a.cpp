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
    int k;
    cin >> k;
    if(k % 2 == 1){
        cout << ((k+1)/2)*(k-(k+1)/2) << endl;
    } else {
        cout << (k/2)*(k/2) << endl;
    }
    return 0;
}
