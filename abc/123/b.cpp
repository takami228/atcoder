#include <iostream>
using namespace std;

int search(int res, int a, int b, int c, int d, int e){
    if(a == -1 && b == -1 && c == -1 && d == -1 && e == -1){
        return res;
    }
    int res_a = 10000000;
    int res_b = 10000000;
    int res_c = 10000000;
    int res_d = 10000000;
    int res_e = 10000000;
    if(res % 10 != 0){
        res = ((res / 10)+1)*10;
    }
    if(a != -1){
        res_a = search(res + a, -1, b, c, d, e);
    }
    if(b != -1){
        res_b = search(res + b, a, -1, c, d, e);
    }
    if(c != -1){
        res_c = search(res + c, a, b, -1, d, e);
    }
    if(d != -1){
        res_d = search(res + d, a, b, c, -1, e);
    }
    if(e != -1){
        res_e = search(res + e, a, b, c, d, -1);
    }
    return min(res_a, min(res_b, min(res_c, min(res_d, res_e))));
}

int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << 
    min(search(a, -1, b, c, d, e), 
      min(search(b, a, -1, c, d, e), 
        min(search(c, a, b, -1, d, e),
         min(search(d, a, b, c, -1, e),search(e, a, b, c, d, -1))))) << endl;;
    return 0;
}