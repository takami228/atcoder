#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    char c = str.at(k-1);
    char c2 = c + 0x20;
    str[k-1] = c2;
    cout << str << endl;
    return 0;
}