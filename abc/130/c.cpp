#include <iostream>
using namespace std;

int main(){
    double w, h, x, y;
    cin >> w >> h >> x >> y;

    cout << w * h / 2.0;
    if(w / 2 == x && h / 2 == y){
        cout << " " << 1 << endl;
    } else {
        cout << " " << 0 << endl;
    }
    return 0;
}