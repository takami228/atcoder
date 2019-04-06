#include <iostream>
using namespace std;

int main(){
    int a[5];
    int k;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> k;
    bool res = true;
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(a[j] - a[i] > k){
                res = false;
            }
        }
    }
    if(res){
        cout << "Yay!" << endl;
    } else {
        cout << ":(" << endl;
    }
    return 0;
}