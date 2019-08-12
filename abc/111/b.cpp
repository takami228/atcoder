#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int diff = 1000;
    int ans = 0;
    for(int i = 1; i <= 9; i++){
        int next = i*111;
        if(next - n < diff && next - n >= 0){
            diff = next - n;
            ans = next;
        };
    }
    cout << ans << endl;
    return 0;
}