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

struct node{
    int x;
    int y;
};

struct CustomCompare{
    bool operator()(const node& lhs, const node& rhs){
        return max(lhs.x, lhs.y) < max(rhs.x, rhs.y);
    }
};

int main(){
    long k;
    int x, y;
    cin >> k >> x >> y;
    node g = node{x, y};
    priority_queue<node, vector<node>, CustomCompare> queue;
    queue.push(g);
    while(!queue.empty()){

    }
    return 0;
}