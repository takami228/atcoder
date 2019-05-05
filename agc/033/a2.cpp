#include <iostream>
using namespace std;
 
int main(){
    int h, w;
    cin >> h >> w;
    bool field[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char c;
            cin >> c;
            field[i][j] = (c == '#');
        }
    }
    int ans = 0;
    while(true){
        // cout << "===" << endl;
        // for(int i = 0; i < h; i++){
        //     for(int j = 0; j < w; j++){
        //         if(field[i][j]){
        //             cout << "#";
        //         } else {
        //             cout << ".";
        //         }
        //     } cout << endl;
        // }
        bool res = true;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                res &= field[i][j];
                if(!res){
                    break;
                }
            }
            if(!res){
                break;
            }
        }
        if(res){
            break;
        }
        bool fieldNext[h][w];
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                fieldNext[i][j] = false;
            }
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(field[i][j]){
                    fieldNext[i][j] = field[i][j];
                    if(i != 0){
                        fieldNext[i-1][j] = true;
                    }
                    if(j != 0){
                        fieldNext[i][j-1] = true;
                    }                    
                    if(i != h-1){
                        fieldNext[i+1][j] = true;
                    }
                    if(j != w-1){
                        fieldNext[i][j+1] = true;
                    }
                }
            }
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                field[i][j] = fieldNext[i][j];
            }
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}