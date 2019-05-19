#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    double a[10001];
    a[0] = 1;
    for(int i = 1; i <= 10000; i++){
        a[i] = a[i-1]*0.5;
    }
    double ans = 0;
    for(int i = 1; i <= min(k-1, n); i++){
        int score = i;
        int count = 0;
        while(score < k){
            count++;
            score *= 2;
        }
        ans += ((double)(1.0)/(double)(n))*a[count];
    }
    if(k <= n){
        ans += (double)(n-k+1)/(double)(n);
    }
    cout << setprecision(12) << ans << endl;
    return 0;
}