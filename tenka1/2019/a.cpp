#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if((a < c && c < b) || (c < a && b < c)) { 
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}