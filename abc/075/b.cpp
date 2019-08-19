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
    int h, w;
    cin >> h >> w;
    char field[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char c;
            cin >> c;
            field[i][j] = c;
        }
    }
    int dx[8] = {-1,0,1,-1,1,-1,0,1};
    int dy[8] = {1,1,1,0,0,-1,-1,-1};
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(field[i][j] == '.'){
                int count = 0;
                for(int k = 0; k < 8; k++){
                    int index_i = i + dx[k];
                    int index_j = j + dy[k];
                    if(index_i >= 0 && index_i <= h-1 && index_j >= 0 && index_j <= w-1){
                        if(field[index_i][index_j] == '#'){
                            count++;
                        }
                    }
                }
                field[i][j] = '0' + count;
            }
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << field[i][j];
        }
        cout << endl;
    }
    return 0;
}
