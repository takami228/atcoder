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
    vector<long> a;
    for(int i = 0; i < n; i++){
        long t;
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    vector<long> twos;
    twos.push_back(1);
    for(long i = 1; i <= a[a.size()-1]; i*=2){
        twos.push_back(2*i);
    }
    long ans = 0;
    int t;
    for(int i = 0; i < a.size(); i++){
        t = 1;
        while(true){
            if(a[i] % twos[t] == 0){
                t++;
            } else {
                t--;
                break;
            }
        }
        ans += t;
    }
    cout << ans << endl;
    return 0;
}
