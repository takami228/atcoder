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
    string a, b;
    cin >> a >> b;
    string x = a + b;
    int y = stoi(x);
    if(y == ((int)sqrt(y))*((int)sqrt(y))){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
