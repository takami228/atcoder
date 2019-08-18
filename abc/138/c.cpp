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

struct CustomCompare{
    bool operator()(const double& lhs, const double& rhs){
        return lhs > rhs;
    }
};

int main(){
    int n;
    cin >> n;
    priority_queue<double, vector<double>, CustomCompare> queue;
    double a;
    for(int i = 0; i < n; i++){
        cin >> a;
        queue.push(a);
    }
    while(queue.size() != 1){
        double a = queue.top();
        queue.pop();
        double b = queue.top();
        queue.pop();
        queue.push((a + b) / 2.0);
    }
    cout << queue.top() << endl;
    return 0;
}
