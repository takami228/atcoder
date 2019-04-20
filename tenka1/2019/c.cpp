#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 0;
    string str;
    cin >> n >> str;
    int ansFront = 0;
    string strFront = str;
    for(int i = 0; i < strFront.size()-1; i++){
        if(strFront.at(i) == '#' && strFront.at(i+1) == '.') {
            strFront[i+1] = '#';
            ansFront++;
        }
    }
    int ansBack = 0;
    string strBack = str;
    for(int i = 0; i < strBack.size()-1; i++){
        if(strBack.at(i) == '#' && strBack.at(i+1) == '.') {
            strBack[i] = '.';
            ansBack++;
        }
    }

    cout << min(ansFront, ansBack) << endl;
    return 0;
}