#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    long x, y, z, k;
    cin >> x >> y >> z >> k;
    long a[x];
    for(int i = 0; i < x; i++){
        cin >> a[i];
    }
    long b[y];
    for(int i = 0; i < y; i++){
        cin >> b[i];
    }
    long c[z];
    for(int i = 0; i < z; i++){
        cin >> c[i];
    }
    vector<long> res;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            for(int n = 0; n < z; n++){
                res.push_back(a[i] + b[j] + c[n]);
            }
        }
    }
    priority_queue<long> pq(res.begin(), res.end());
    for(int i = 0; i < k; i++){
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;
}