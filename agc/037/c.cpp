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
    long long value;
    int index;
};

struct CustomCompare{
    bool operator()(const Node& lhs, const Node& rhs){
        return lhs.value < rhs.value;
    }
};

int main(){
    int n;
    cin >> n;
    vector<long long> a;
    vector<long long> b;
    priority_queue<Node, vector<Node>, CustomCompare> queue;
    long long tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0; i < n; i++){
        cin >> tmp;
        b.push_back(tmp);        
        Node node = {tmp, i};
        queue.push(node);
    }
    int ans = 0;
    while(!queue.empty()){
        Node p = queue.top();
        queue.pop();
        long long value = p.value;
        int index = p.index;
        int index_n, index_m;
        if(index == 0){
            index_n = n-1;
            index_m = 1;
        } else if(index == n-1){
            index_n = n-2;
            index_m = 0;
        } else {
            index_n = index-1;
            index_m = index+1;
        }
        long long value_next = value;
        int d = 0;
        while(true){
            if(value_next > b[index_n] + b[index_m]){
                d = value_next / (b[index_n] + b[index_m]);
                value_next %= (b[index_n] + b[index_m]); 
            } else {
                break;
            }
        }
        if(value_next == 0 || d == 0){
            break;
        }
        ans += d;
        b[index] = value_next;
        if(b[index] != a[index]){
            Node p_next = {b[index], index};
            queue.push(p_next);
        }
    }
    bool flag = true;
    for(int i = 0; i < n; i++){
        flag &= a[i] == b[i];
    }
    if(flag){
        cout << ans << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}
