#include <iostream>
using namespace std;

int main(){
    int n;
    long long k;
    cin >> n >> k;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long ans = 0;
    int right = 0;
    long long s = 0;
    for (int left = 0; left < n; ++left) {
        while (right < n && s + a[right] < k) {
            s += a[right];
            ++right;
        }
        if(s + a[right] >= k){
            ans += n-right;
        }
        s -= a[left];
    }
    cout << ans << endl;
}