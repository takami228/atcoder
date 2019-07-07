#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
bool comp(pair<long long, long long> l, pair<long long, long long> r){
    long long a = l.first * l.second;
    long long b = r.first * r.second;
    return a > b;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<long long> card;
    for(int i = 0; i < n; i++){
        long long k;
        cin >> k;
        card.push_back(k);
    }
    vector<pair<long long, long long> > op;
    for(int i = 0; i < m; i++){
        long long b, c;
        cin >> b >> c;
        pair<long long, long long> p = make_pair(b, c);
        op.push_back(p);
    }
    sort(op.begin(), op.end(), comp);
    for(int i = 0; i < m; i++){
        long long b = op[i].first;
        long long c = op[i].second;
        sort(card.begin(), card.end());
        if(c >= card[0]){
            for(int i = 0; i < b; i++){
                if(card[i] <= c){
                    card[i] = c;
                } else {
                    break;
                }
            }
        }
    }
    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += card[i];
    }
    cout << ans << endl;
    return 0;
}