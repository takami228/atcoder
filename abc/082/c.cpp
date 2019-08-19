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
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        long value = v[i];
        int pos = i;
        int count = 1;
        while(true){
            pos++;
            if(v[pos] == value){
                count++;
            } else {
                if(count > value){
                    ans += count - value;
                } else if(count < value){
                    ans += count;
                } else {
                }
                i = pos - 1;;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
