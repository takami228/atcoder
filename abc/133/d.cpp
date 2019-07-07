#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n+1];
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    long long ans[n+1];    
    long long t = 0;
    for(int j = 0; j < n/2; j++){
        long long index = (2 + 2*j);
        if(index > n){
            index %= n;
        }
        t += 2*a[index];
    }
    ans[1] = sum - t;
    for(int i = 2; i <= n; i++){
        ans[i] = 2*a[i-1] - ans[i-1];
    }

    for(int i = 1; i <= n-1; i++){
        cout << ans[i] << " ";
    }
    cout << ans[n] << endl;
    return 0;
}