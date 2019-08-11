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

bool contains(vector<int> v, int target){
    return std::find(v.begin(), v.end(), target) != v.end();
}

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int l[n];
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    return 0;
}