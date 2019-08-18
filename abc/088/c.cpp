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
    int c[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> c[i][j];
        }
    }
    bool ans = true;

    ans &= (c[0][0] - c[0][1]) == (c[1][0] - c[1][1]); 
    ans &= (c[1][0] - c[1][1]) == (c[2][0] - c[2][1]); 
    ans &= (c[2][0] - c[2][1]) == (c[1][0] - c[1][1]); 

    ans &= (c[0][0] - c[0][2]) == (c[1][0] - c[1][2]); 
    ans &= (c[1][0] - c[1][2]) == (c[2][0] - c[2][2]); 
    ans &= (c[2][0] - c[2][2]) == (c[0][0] - c[0][2]); 

    ans &= (c[0][1] - c[0][2]) == (c[1][1] - c[1][2]); 
    ans &= (c[1][1] - c[1][2]) == (c[2][1] - c[2][2]); 
    ans &= (c[2][1] - c[2][2]) == (c[0][1] - c[0][2]); 

    if(ans){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
