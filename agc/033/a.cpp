#include <iostream>
#include <vector>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector< pair<int, int> > v;
    int d[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char c;
            cin >> c;
            if(c == '#'){
                pair<int,int> p = make_pair(i,j);
                v.push_back(p);
            }
            d[i][j] = 0;
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            int tmp = 1000000;
            for(int k = 0; k < v.size(); k++){
                pair<int,int> p = v[k];
                int dist = abs(p.first - i) + abs(p.second - j);
                tmp = min(tmp, dist);
            }
            d[i][j] = tmp;
        }
    }
    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            ans = max(ans, d[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}