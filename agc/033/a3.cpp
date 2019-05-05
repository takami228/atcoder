#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int h, w;
    cin >> h >> w;
    bool field[h][w];
    vector< pair<int,int> > v;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char c;
            cin >> c;
            field[i][j] = (c == '#');
            if(!field[i][j]){
                pair<int, int> p = make_pair(i,j);
                v.push_back(p);
            }
        }
    }
    int ans = 0;
    while(true){
        ans++;
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
        bool fieldNext[h][w];
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                fieldNext[i][j] = false;
            }
        }
        for(int k = 0; k < v.size(); k++){
            int i = v[k].first;
            int j = v[k].second;
            bool isBlack = false;
            if(i != 0){
                isBlack |= field[i-1][j];
            }
            if(j != 0){
                isBlack |= field[i][j-1];
            }                    
            if(i != h-1){
                isBlack |= field[i+1][j];
            }
            if(j != w-1){
                isBlack |= field[i][j+1];
            }
            fieldNext[i][j] = isBlack;
        }
        v.clear();
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                field[i][j] |= fieldNext[i][j];
                if(!field[i][j]){
                    pair<int, int> p = make_pair(i,j);
                    v.push_back(p);
                }
            }
        }
        if(v.size() == 0){
            break;
        }
    }
    cout << ans << endl;
    return 0;
}