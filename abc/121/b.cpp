#include <iostream>
using namespace std;

int main(){
    int N, M, C;
    cin >> N >> M >> C;
    int ans = 0;
    int b[M];
    for(int j = 0; j < M; j++){
        cin >> b[j]; 
    }
    for(int i = 0; i < N; i++){
        int a[M];
        for(int j = 0; j < M; j++){
            cin >> a[j]; 
        }
        int sum = 0;
        for(int j = 0; j < M; j++){
             sum += a[j] * b[j];
        }
        if( sum + C > 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}