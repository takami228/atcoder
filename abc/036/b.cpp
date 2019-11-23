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
    int n;
    cin >> n;
    char field[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> field[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            cout << field[j][i];
        }
        cout << endl;
    }
}
