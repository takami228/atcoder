#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    string ans = "";
    for(int i = 0; i < str.size(); i++){
        char c = str.at(i);
        if(c != 'a' && c != 'i' && c != 'u' && c != 'e' && c != 'o'){
            ans += c;
        }
    }
    cout << ans << endl;
}