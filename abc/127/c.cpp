#include <iostream>
using namespace std;
 
int main(){
    int n, m, l, r;
    cin >> n >> m;
    int a = 1;
    int b = n;
    for(int i = 1; i <= m; i++){
        cin >> l >> r;
        a = max(a, l);
        b = min(b, r);
    }
    if(b < a){
        cout << 0 << endl;
    } else {
        cout << b - a + 1 << endl;
    }
    return 0;
}