#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    int b[n+1];
    int c[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    for(int i = 1; i <= n-1; i++){
        cin >> c[i];
    }
    int score = 0;
    score += b[a[1]];
    for(int i = 2; i <= n; i++){
        score += b[a[i]];
        if(a[i-1]+1 == a[i]){
            score += c[a[i-1]];
        }
    }
    cout << score << endl;
    return 0;
}
