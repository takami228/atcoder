#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    bool isVisited[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        isVisited[i] = false;
    }
    int ans = 0;
    for(int i = 1; i<= n; i++){
        if(!isVisited[i]){
            ans++;
            int r = a[i];
            for(int j = i; j <= n; j++){
                if(r < a[j] && !isVisited[j]){
                    isVisited[j] = true;
                    r = a[j];
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}