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

struct Node{
    int index;
    vector<int> children;
};

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> leaves[n+1];
    int parents[n+1];
    int a, b;
    bool isVisited[n+1];
    for(int i = 1; i <= n-1; i++){
        cin >> a >> b;
        parents[b] = a;
        leaves[a].push_back(b);
    }
    return 0;
}
