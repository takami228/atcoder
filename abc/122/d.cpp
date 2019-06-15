#include <iostream>
using namespace std;

int main(){
    long A, B;
    cin >> A >> B;
    long ans = A;
    for(long i = A+1; i <= B; i++){
        ans ^= i;
    }
    cout << ans << endl;
}