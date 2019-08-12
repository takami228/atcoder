#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int d;
    cin >> d;
    if(d == 22){
        cout << "Christmas Eve Eve Eve" << endl;
    } else if(d == 23) {
        cout << "Christmas Eve Eve" << endl;
    } else if(d == 24) {
        cout << "Christmas Eve" << endl;
    } else {
        cout << "Christmas" << endl;
    }
    return 0;
}