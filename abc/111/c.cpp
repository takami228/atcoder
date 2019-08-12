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
    int n;
    cin >> n;
    map<int,int> count_even;
    map<int,int> count_odd;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i+=2){
        count_even[v[i]]++;
    }
    for(int i = 1; i < n; i+=2){
        count_odd[v[i]]++;
    }
    int max_even = 0;
    int max_odd = 0;
    int odd_key = 0;
    int even_key = 0;
    for (auto x : count_even){
        if(max_even <= x.second){
            max_even = x.second;
            even_key = x.first;
        }
    }
    for (auto x : count_odd){
        if(max_odd <= x.second && x.first != even_key){
            max_odd = x.second;
        }
    }
    int ans1 = n - max_even - max_odd;

    max_even = 0;
    max_odd = 0;
    odd_key = 0;
    even_key = 0;
    for (auto x : count_odd){
        if(max_odd <= x.second){
            max_odd = x.second;
            odd_key = x.first;
        }
    }
    for (auto x : count_even){
        if(max_even <= x.second && x.first != odd_key){
            max_even = x.second;
        }
    }
    int ans2 = n - max_even - max_odd;
    cout << min(ans1, ans2) << endl;
    return 0;
}