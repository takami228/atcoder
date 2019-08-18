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
    int n, a;
    cin >> n >> a;
    if(n % 500 <= a){
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl; 
    }
    return 0;
}
