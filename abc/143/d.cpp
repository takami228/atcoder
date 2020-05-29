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
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> l;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        l.push_back(a);
    }
    sort(l.begin(), l.end());
    int ans = 0;
    for(int i = 0; i < n -2 ; i++){
        for(int j = i + 1; j < n - 1; j++){
            bool isContinue = true;
            for(int k = j + 1; k < n; k++){
                if(l[i] < l[j] + l[k]){
                    if(l[j] < l[i] + l[k]){
                        if(l[k] < l[i] + l[j]){
                            ans++;
                        } else {
                            break;
                        }
                    } else {
                        isContinue = false;
                        break;
                    }
                } else {
                    continue;
                }
            }
            if(!isContinue){
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
