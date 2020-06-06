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
    vector<pair<int, int> > shougen[n];
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        for(int j = 0; j < a; j++){
            int x, y;
            cin >> x >> y;
            pair<int,int> p = make_pair(x-1, y);
            shougen[i].push_back(p);
        }
    }

    int ans = 0;
    for (int bit = 0; bit < (1<<n); ++bit) {
        bool expect[n];
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) {
                expect[i] = true;
                count++;
            } else {
                expect[i] = false;
            }
        }
        bool result = true;
        for(int i = 0; i < n; i++){
            if(expect[i]){
                for(int j = 0; j < shougen[i].size(); j++){
                    int x = shougen[i][j].first;
                    int y = shougen[i][j].second;
                    if(y == 1){
                        result &= (expect[x] == true);
                    } else {
                        result &= (expect[x] == false);
                    }
                }
            }
            if(!result){
                break;
            }
        }
        if(result){
            ans = max(count, ans);
        }
    }  
    cout << ans << endl;
    return 0;
}
