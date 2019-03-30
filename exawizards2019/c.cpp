#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n, q;
    string s;
    cin >> n >> q >> s;
    char t[q];
    char d[q];
    int g[n];
    map<char, vector<int> > m;
    for(int i = 0; i < q; i++){
        cin >> t[i] >> d[i]; 
    }
    for(int i = 0; i < n; i++){
        g[i] = 1;
    }
    for(int i = 0; i < s.size(); i++){
        m[s.at(i)].push_back(i);
    }
    for(int i = 0; i < q; i++){
        vector<int> v = m[t[i]];
        for(int j = 0; j < v.size(); j++){
            int tmp = v[j];
            if(d[i] == 'L'){
                if(tmp == 0){
                    g[tmp] = 0;
                } else {
                    g[tmp-1]+=g[tmp];
                    g[tmp] = 0;
                }
            } else {
                if(tmp == n-1){
                    g[tmp] = 0;
                } else {
                    g[tmp+1]+=g[tmp];
                    g[tmp] = 0;
                }
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += g[i];
    }
    cout << ans << endl;
    return 0;
}
