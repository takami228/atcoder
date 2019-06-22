#include <iostream>
using namespace std;

int abs(int a, int b){
    if(a < b ){
        return b - a; 
    } else {
        return a - b;
    }
}

int main(){
    int n, l;
    cin >> n >> l;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += l + i - 1;
    }
    if(l > 0 && l + n -1 > 0){
        cout << sum - l << endl;
    } else if((l <= 0 && l + n -1 >= 0) ||
    (l >= 0 && l + n -1 <= 0)){
        cout << sum << endl;
    } else {
        cout << sum - (l + n -1) << endl;
    }

    return 0;
}