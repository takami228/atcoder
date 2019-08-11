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
    int s;
    cin >> s;
    int a = s;
    int b = 0;
    int m = 1;
    int isVisit[1000001];
    for(int i = 0; i < 1000001; i++){
        isVisit[i] = 0;
    }
    isVisit[a] = 1;
    int ans = 0;
    while(true){
        m++;
        if(a % 2 == 1){
            b = 3*a + 1;
        } else {
            b = a/2;
        }
        if(isVisit[b] != 0){
            ans = m;
            break;
        } else {
            isVisit[b] = m;
            a = b;
        }
    }
    cout << ans << endl;
    return 0;
}