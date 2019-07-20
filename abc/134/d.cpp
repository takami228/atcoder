#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int ans[n+1];
    vector<int> b;
    int mid = n / 2;
    for(int i = n; i > mid; i--){
        if(a[i] == 1){
            ans[i] = 1;
            b.push_back(i);
        } else {
            ans[i] = 0;
        }
    }
    for(int i = mid; i >= 2; i--){
        int t = 0;
        for(int j = 2*i; j <= n; j+=i){
            if(ans[j] == 1){
                t++;
            }
        }
        if(t % 2 == a[i]){
            ans[i] = 0;
        } else {
            ans[i] = 1;
            b.push_back(i);
        }
    }    
    if(a[1] == (b.size() % 2)){
        ans[1] = 0;
    } else {
        ans[1] = 1;
        b.push_back(1);
    }
    int m = b.size();
    cout << m << endl;
    sort(b.begin(), b.end());
    for(int i = 0; i < m; i++){
        if(i == m -1){
            cout << b[i] << endl;
        } else {
            cout << b[i] << " ";
        }
    }
    return 0;
}