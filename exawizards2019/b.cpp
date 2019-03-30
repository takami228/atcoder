#include <iostream>
using namespace std;

int main(){
    int n;
    string str;
    cin >> n >> str;
    int r = 0;
    int b = 0;
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == 'R') {
            r++;
        } else {
            b++;
        }
    }
    if( r > b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}