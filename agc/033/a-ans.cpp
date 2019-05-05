#include <iostream>
#include <queue>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    queue< pair<int, int> > q;
    int d[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char c;
            cin >> c;
            if(c == '#'){
                pair<int,int> p = make_pair(i,j);
                q.push(p);
                d[i][j] = 0;
            } else {
                d[i][j] = 100000000;
            }
        }
    }
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, 1, -1, 0};
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
            if(d[nx][ny] == 100000000){
                d[nx][ny] = d[x][y]+1;
                pair<int,int> np = make_pair(nx, ny);
                q.push(np);
            }
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