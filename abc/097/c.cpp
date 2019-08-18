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
    string s; int k;
    cin >> s >> k;
    vector<string> dics;
    vector<string> dic[6];
    for(int p = 1; p <= min(5, (int)s.size()); p++){
        for(int i = 0; i < s.size(); i++){
            string a = "";
            for(int j = 0; j < p; j++){
                if(i + j < s.size()){
                    a += s[i+j];
                }
            }
            if(a.size() == p){
                dic[p].push_back(a);
            }
        }
        sort(dic[p].begin(), dic[p].end());
        dic[p].erase(unique(dic[p].begin(), dic[p].end()), dic[p].end());
        for(int i = 0; i < dic[p].size(); i++){
            dics.push_back(dic[p][i]);
        }
    }
    sort(dics.begin(), dics.end());
    cout << dics[k-1] << endl;
    return 0;
}
