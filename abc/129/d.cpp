#include <iostream>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    bool field[h+1][w+1];
    for(int i = 1; i <= h; i++){
        char c;
        for(int j = 1; j <= w; j++){
            cin >> c;
            if(c == '#'){
                field[i][j] = false;
            } else {
                field[i][j] = true;
            }
        }
    }

    int ans = 0;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            int tmp = 0;
            if(field[i][j]){
                //up
                for(int k = i+1; k <= h; k++){
                    if(!field[k][j]){
                        break;
                    } else {
                        tmp++;
                    }
                }
                //down
                for(int k = i-1; k >=1; k--){
                    if(!field[k][j]){
                        break;
                    } else {
                        tmp++;
                    }
                }
                //right
                for(int k = j+1; k <= w; k++){
                    if(!field[i][k]){
                        break;
                    } else {
                        tmp++;
                    }
                }
                //down
                for(int k = j-1; k >=1; k--){
                    if(!field[i][k]){
                        break;
                    } else {
                        tmp++;
                    }
                }
                ans = max(ans, tmp+1);
            }
            if(ans == h + w - 1){
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}