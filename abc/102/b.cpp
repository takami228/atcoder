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
    long long a_max = -1;
    long long a_min = 1000000001;    
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        a_max = max(a, a_max);
        a_min = min(a, a_min);
    }
    cout << a_max - a_min << endl;
    return 0;
}
