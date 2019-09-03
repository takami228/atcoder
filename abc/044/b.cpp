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
using ll = long long;

void print_ans(bool flag){
    if(flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }   
}

int main(){
    string w;
    cin >> w;
    bool ans = true;
    if(w.size() % 2 == 1){
        ans = false;
    } else {
        sort(begin(w), end(w));
        for(int i = 0; i < w.size()-1; i+=2){
            ans &= w[i] == w[i+1];
        }
    }
    print_ans(ans);
    return 0;
}
