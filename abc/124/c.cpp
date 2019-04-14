#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans = "";
    if(s.size() == 1){
        cout << 0 << endl;
    } else {
        if(s.at(0) == '0'){
            for(int i = 0; i < s.size(); i++){
                if(i % 2 == 0){
                    ans += "0";
                } else {
                    ans += "1";
                }
            }
        } else {
            for(int i = 0; i < s.size(); i++){
                if(i % 2 == 0){
                    ans += "1";
                } else {
                    ans += "0";
                }
            }
        }
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(s.at(i) != ans.at(i)){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}