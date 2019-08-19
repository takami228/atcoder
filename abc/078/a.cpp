#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    char x, y;
    cin >> x >> y;
    if(x < y){
        cout << "<" << endl;
    } else if(x == y){
        cout << "=" << endl;
    } else {
        cout << ">" << endl;
    }
    return 0;
}
