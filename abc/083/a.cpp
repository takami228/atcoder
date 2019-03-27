#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        string str = to_string(i);
        int sum = 0;
        for(int j = 0; j < str.size(); j++){
            sum += (int)(str.at(j) - '0');
        }
        if(a <= sum && sum <= b){
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}