#include <iostream>
using namespace std;

int main(){
	long long l, r;
	cin >> l >> r;
	int ans = 2019;
 
	for (long long i = l; i < r; i++) {
		for (long long j = i + 1; j <= r; j++) {
            ans = min(ans, (int)(i * j % 2019));
            if(ans == 0){
                cout << 0 << endl;
                return 0;
            }
        }
    }
 	cout << ans << endl;
 
	return 0;
}