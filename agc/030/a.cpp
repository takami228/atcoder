#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int res = 0;
    if( C <= A + B){
        res = B + C;
    } else {
        res = A + B + B + 1;
    }
    cout << res << endl;
    return 0;
}