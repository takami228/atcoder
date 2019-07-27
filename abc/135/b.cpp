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
    int n;
    cin >> n;
    vector<int> v;
    int diff = 0;
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        v.push_back(a);
        if(a != i){
            diff++;
        }
    }
    if(diff == 0 | diff == 2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}