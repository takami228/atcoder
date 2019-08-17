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
    int n;
    cin >> n;
    bool ans = false;
    for(int i = 0; i <= 25; i++){
        for(int j = 0; j <= 15; j++){
            if(i*4 + j*7 == n){
                ans = true;
            }
        }
    }
    if(ans){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;            
    }
    return 0;
}
