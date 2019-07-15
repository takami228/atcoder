#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node{
    long long t;
    vector<long long> v;
};

struct CustomCompare{
    bool operator()(const Node& lhs, const Node& rhs){
        return lhs.t > rhs.t;
    }
};

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
    priority_queue<Node, vector<Node>, CustomCompare > queue;
    Node node = { ans, a };
    queue.push(node);
    while(!queue.empty()){
        Node p = queue.top();
        queue.pop();
        long long t = p.t;
        vector<long long> card = p.v;
        if(card.size() == 3){
            long long ans_tmp = card[0] + 2*card[1] + card[2];
            ans = min(ans, ans_tmp);
            continue;
        }
        if(t <= ans){
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
                }
                if(t_next <= ans){
                    Node p_next = {t_next, card_next};
                    queue.push(p_next);
                }
            }
        }
    }
    cout << ans << endl;
}