#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> G[m+1];
    int p[m+1];
    int k, s;
    for(int i = 1; i <= m; i++){
        cin >> k;
        for(int j = 0; j < k; j++){
            cin >> s;
            G[i].push_back(s);
        }
    }
    for(int i = 1; i <= m; i++){
        cin >> p[i];
    }
 
    int ans = 0;
    for(int bit = 0; bit < (1<<n); bit++){
        vector<int> a;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                a.push_back(i+1);
            }
        }
        int isOn = 0;
        for(int i = 1; i <= m; i++){
            int b = 0;
            for(int j = 0; j < a.size(); j++){
                vector<int>::iterator vIter = find(G[i].begin(), G[i].end(), a.at(j));
                if(vIter != G[i].end()){
                    b++;
                }
            }
            if(b % 2 == p[i]){
                isOn++;
            }
        }
        if(isOn == m){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}