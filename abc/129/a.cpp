#include <iostream>
using namespace std;

int main(){
    int p, q, r;
    cin >> p >> q >> r;
    cout << min(p+q, min(p+r, r+q)) << endl;;
    return 0;
}