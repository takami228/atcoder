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
    int h[n+1];
    for(int i = 1; i <= n; i++){
        cin >> h[i];
    }
    bool ans = true;
    for(int i = 2; i <= n; i++){
        if(h[i] > h[i-1]){
            h[i]--;
        } else if(h[i] == h[i-1]){
            continue;
        } else {
            ans = false;
            break;
        }
    }

    if(ans){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}