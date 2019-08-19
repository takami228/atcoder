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

int k;

int dfs(int n, int v){
    if(n == 0){
        return v;
    } else {
        return min(dfs(n-1, 2*v), dfs(n-1, v+k));
    }
}

int main(){
    int n;
    cin >> n >> k;
    cout << dfs(n, 1) << endl;
    return 0;
}
