#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, pair< string, int > > l, pair<int, pair<string, int> > r){
    pair<string, int> a = l.second;
    pair<string, int> b = r.second;
    if(a.first != b.first){
        return a.first < b.first;
    } else {
        return a.second > b.second;
    }
}

int main(){
    int n;
    cin >> n;
    vector< pair<int, pair< string, int > > > v;
    for(int i = 1; i <= n; i++){
        string s;
        int p;
        cin >> s >> p;
        pair<string, int> t = make_pair(s, p);
        pair<int, pair<string, int> > h = make_pair(i, t);
        v.push_back(h);
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i).first << endl;
    }
    return 0;
}