#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;    
    for(int i = 0; i < n; i++){
        int p = 0;
        cin >> p;
        a.push_back(p);
    }
    sort(a.begin(), a.end());
    int alice = 0;
    int bob = 0;
    bool isAlice = true;
    for(int i = n-1; i >= 0; i--){
        if(isAlice){
            alice += a[i];
            isAlice = false;
        } else {
            bob += a[i];
            isAlice = true;
        }
    }
    cout << abs(alice - bob) << endl;
    return 0;
}