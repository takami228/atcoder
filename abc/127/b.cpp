#include <iostream>
using namespace std;

int main(){
    long long r, d, x;
    cin >> r >> d >> x;
    for(int i = 0; i < 10; i++){
        x = r*x - d;
        cout << x << endl;
    }
    return 0;
}