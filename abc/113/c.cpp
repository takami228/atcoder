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

struct node{
    int city;
    int pref;
    long year;
    string code;
};

bool comp_year(const node& l, const node& r){
    if(l.pref == r.pref){
        return l.year < r.year;
    } else {
        return l.pref < r.pref;
    }
}

bool comp_city(const node& l, const node& r){
    return l.city < r.city;
}

string padding(int a){
    string str = to_string(a);
    if(str.size() != 6){
        while(true){
            str = "0" + str;
            if(str.size() == 6){
                break;
            }
        }
    }
    return str;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector< node > v;
    int p;
    long y;
    int prefs[n+1];
    for(int i = 1; i <= n; i++){
        prefs[i] = 0;
    }
    for(int i = 1; i <= m; i++){
        cin >> p >> y;
        node d = {i, p, y, ""};
        v.push_back(d);
    }
    sort(v.begin(), v.end(), comp_year);
    for(int i = 0; i < v.size(); i++){
        int city = v[i].city;
        int p = v[i].pref;
        prefs[p]++;
        v[i].code = padding(p) + padding(prefs[p]);
    }
    sort(v.begin(), v.end(), comp_city);
    for(int i = 0; i < v.size(); i++){
        cout << v[i].code << endl;
    }
    return 0;
}
