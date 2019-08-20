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
    int h, w;
    cin >> h >> w;
    char field[h+2][w+2];
    for(int i = 0; i < h+2; i++){
        for(int j = 0; j < w + 2; j++){
            if(i == 0 || i == (h+1) || j == 0 || j == (w + 1)){
                field[i][j] = '#';
            } else {
                char c;
                cin >> c;
                field[i][j] = c;
            }
        }
    }
    for(int i = 0; i < h+2; i++){
        for(int j = 0; j < w + 2; j++){
            cout << field[i][j];
        }
        cout << endl;
    }
    return 0;
}
