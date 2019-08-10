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
    int k, x;
    cin >> k >> x;
    for(int i = x - k + 1; i <= x+k-1; i++){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}