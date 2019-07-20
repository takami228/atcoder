#include <iostream>
#include <string>
using namespace std;

int main(){
    int m;
    cin >> m;
    double mk = (double)m / (double)1000;
    string vv = "";
    if( mk < 0.1 ){
        vv = "00";
    } else if(mk >= 0.1 && mk <= 5){
        int a = (int)(mk*10);
        if(a < 10){
            vv = "0" + to_string(a);
        } else {
            vv = to_string(a);
        }
    } else if(mk >= 6 && mk <= 30){
        vv = to_string((int)(mk+50));        
    } else if(mk >= 35 && mk <= 70){
        vv = to_string((int)((mk-30)/5.0 + 80));        
    } else if(mk > 70){
        vv = "89";
    }

    cout << vv << endl;
}