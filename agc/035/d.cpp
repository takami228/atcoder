#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans = 20000000000;
    vector<long long> a;
    for(int i = 0; i < n; i++){
        long long v;
        cin >> v;
        a.push_back(v);
    }
    stack<pair<long long, vector<long long> > > stack;    
    pair<long long, vector<long long> > p = make_pair(ans, a);
    stack.push(p);
    while(!stack.empty()){
        pair<long long, vector<long long> > node = stack.top();
        stack.pop();
        long long t = p.first;
        vector<long long> card = node.second;
        if(card.size() == 3){
            long long ans_tmp = card[0] + 2*card[1] + card[2];
            ans = min(ans, ans_tmp);
        }
        for(int i = 1; i <= card.size()-2; i++){
            vector<long long> card_next;
            long long t_next = 0;
            bool isBreak = false;
            for(int j = 0; j < card.size(); j++){
                if(j == i - 1 || j == i + 1 ){
                    card_next.push_back(card[j]+card[i]);
                    t_next += card[j]+card[i];
                } else if(j == i){

                } else {
                    card_next.push_back(card[j]);
                    t_next += card[j];
                }
                if(ans < t_next){
                    isBreak = true;
                    break;
                }
            }
            if(ans > t_next && !isBreak){
                pair<long long, vector<long long> > p_next = make_pair(t_next, card_next);
                stack.push(p_next);
            }
        }
    }
    cout << ans << endl;
}