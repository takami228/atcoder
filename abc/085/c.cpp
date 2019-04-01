#include <iostream>
using namespace std;

int f(int i, int j, int k){
    return 10000*i + 5000*j + 1000*k;
}

int main(){
    int n, y;
    cin >> n >> y;
    int a = -1;
    int b = -1;
    int c = -1;
    for(int i = 0; i <= n; i++){
        if(f(i,0,0) > y){
            break;
        }
        for(int j = 0; j <= n; j++){
            if(i+j > n || f(i,j,n-i-j) > y){
                break;
            }
            if(f(i, j, n-i-j) == y){
                a = i;
                b = j;
                c = n - i - j;
                break;
            }
        }
        if(a != -1 && b != -1 && c != -1){
            break;
        }
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}