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

bool contains(vector<int> v, int target){
    return find(v.begin(), v.end(), target) != v.end();
}

int main(){
    int a, b;
    cin >> a >> b;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    if(!contains(v, 1)){
        cout << 1 << endl;
    }
    if(!contains(v, 2)){
        cout << 2 << endl;
    }
    if(!contains(v, 3)){
        cout << 3 << endl;
    }
    return 0;
}
