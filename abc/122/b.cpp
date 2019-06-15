#include <iostream>
#include <string>
using namespace std;

bool isATGC(char c){
    return c == 'A' || c == 'T' || c == 'G' || c == 'C';
}

int main(){
    string str = "";
    cin >> str;
    int atgc = 0;
    int head = 0;
    int tail = 0;
    for(int head = 0; head < str.size(); head++){
        tail = head;
        int atgc_tmp = 0;
        while(tail < str.size()){
            if(isATGC(str.at(tail))){
                atgc_tmp++;
                if(tail == str.size()-1){
                    atgc = max(atgc, atgc_tmp);
                    break;
                }
            } else {
                atgc = max(atgc, atgc_tmp);
                break;
            }
            tail++;
        }
    }
    cout << atgc << endl;
}