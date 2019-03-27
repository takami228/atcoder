#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = 0;
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == '1'){
            n++;
        }
    }
    cout << n << endl;
    return 0;
}