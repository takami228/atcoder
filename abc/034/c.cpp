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
using ll = long long;

int main(){
    ll w, h;
    cin >> w >> h;
    ll field[w+1][h+1];
    for(int i = 0; i <= w; i ++){
        for(int j = 0; j <= h; j++){
            field[i][j] = 0;
        }
    }
    for(int i = 1; i <= w; i++){
        field[i][1] = 1;
    }
    for(int j = 1; j <= h; j++){
        field[1][j] = 1;
    }
    for(int i = 2; i <= w; i++){
        for(int j = 2; j <= h; j++){
            field[i][j] = (field[i-1][j] + field[i][j-1]) % 1000000007;
        }
    }
    cout << field[w][h] << endl;
    return 0;
}
