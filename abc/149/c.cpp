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
    bool isPrime[110000];
    for(int i = 2; i <= 110000; i++){
        isPrime[i] = true;
    }
    for(int i = 2; i <= 110000; i++){
        if(isPrime[i]){
            for(int j = 2*i; j <= 110000; j += i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = n; i <= 110000; i++){
        if(isPrime[i]){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
