#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long x;
    cin >> x;
    for(int i = 1; i < n; i++){
        long long a;
        cin >> a;
        x ^= a;
    }
    long long y = x ^ x;
    if(x == y){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}