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

bool is753(string str){
    return str.find("7") != string::npos 
    && str.find("5") != string::npos
    && str.find("3") != string::npos;   
}

int main(){
    long long n;
    cin >> n;
    vector<long> v;
    vector<long> x;
    vector<long> w;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    x.push_back(3);
    x.push_back(5);
    x.push_back(7);
    while(true){
        w.clear();
        for(int i = 0; i < x.size(); i++){
            w.push_back(stol("3" + to_string(x[i])));
            w.push_back(stol("5" + to_string(x[i])));
            w.push_back(stol("7" + to_string(x[i])));
            w.push_back(stol(to_string(x[i]) + "3"));
            w.push_back(stol(to_string(x[i]) + "5"));
            w.push_back(stol(to_string(x[i]) + "7"));
        }
        sort(w.begin(), w.end());
        w.erase(unique(w.begin(), w.end()), w.end());
        bool flag = false;
        for(int i = 0; i < w.size(); i ++){
            if(w[i] <= n){
                v.push_back(w[i]);
            } else {
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
        x.clear();
        for(int i = 0; i < w.size(); i++){
            x.push_back(w[i]);
        }
    }
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        if(is753(to_string(v[i]))){
            ans++;
        }        
    }
    cout << ans << endl;
    return 0;
}