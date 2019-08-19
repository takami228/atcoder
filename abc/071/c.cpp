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

int main(){
    int n;
    cin >> n;
    vector<long> v;
    for(int i = 0; i < n; i++){
        long a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<long>());
    vector<long> rec;
    for(int i = 1; i < v.size(); i++){
        if(v[i-1] == v[i]){
            rec.push_back(v[i]);
            if(rec.size() == 2){
                break;
            }
            i++;
        }
    }
    if(rec.size() == 2){
        cout << rec[0] * rec[1] << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
