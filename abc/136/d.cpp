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
    string s;
    cin >> s;
    int m = s.size();
    int h[m+1];
    int d[m+1];
    int e[m+1];
    int f[m+1];
    int d_next[m+1];
    bool dir[m+1];
    for(int i = 1; i <= m; i++){
        dir[i] = (s[i-1] == 'R');
        d[i] = 1;
        e[i] = 1;
        f[i] = 1;
        d_next[i] = 0;
    }
    bool flag = false;
    for(int i = 1; i <= 10000; i++){
        for(int j = 1; j <= m; j++){
            f[j] = e[j];
            e[j] = d[j];
        }
        for(int j = 1; j <= m; j++){
            if(dir[j]){
                d_next[j+1] += d[j];
            } else {
                d_next[j-1] += d[j];
            }
        }
        for(int j = 1; j <= m; j++){
            d[j] = d_next[j];
            d_next[j] = 0;
        }
        bool isLoop = true;
        for(int j = 1; j <= m; j++){
            isLoop &= (d[j] == f[j]);
            if(!isLoop){
                break;
            }
        }
        if(isLoop){
            flag = (i % 2 == 0);
            break;
        }
    }
    if(flag){
        for(int i = 1; i < m; i++){
            cout << d[i] << " ";
        }
        cout << d[m] << endl;
    } else {
        for(int i = 1; i < m; i++){
            cout << e[i] << " ";
        }
        cout << e[m] << endl;
    }
    return 0;
}