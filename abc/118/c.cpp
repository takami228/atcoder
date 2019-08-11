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
    priority_queue<long long, vector<long long>, greater<long long> > queue;
    priority_queue<long long, vector<long long>, greater<long long> > queue_next;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        queue.push(a);
    }
    long long ans = 0;
    while(true){
        if(queue.size() == 1){
            ans = queue.top();
            break;
        } else {
            long long m = queue.top();
            queue.pop();
            queue_next.push(m);
            while(!queue.empty()){
                long long q = queue.top();
                queue.pop();
                long long next = q % m;
                if(next != 0){
                    queue_next.push(next);
                }
            }
            while(!queue_next.empty()){
                queue.push(queue_next.top());
                queue_next.pop();
            }
        }
    }
    cout << ans << endl;
    return 0;
}