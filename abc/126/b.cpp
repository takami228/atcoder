#include <iostream>
#include <string>
using namespace std;

bool isMonth(string str){
    string mm[12] = {
        "01","02","03","04","05","06","07","08","09","10","11","12"
    };
    for(int i = 0; i < 12; i++){
        if(str == mm[i]){
            return true;
        }
    }
    return false;
}

int main(){
    string str;
    cin >> str;
    string first = str.substr(0,2);
    string second = str.substr(2,2);
    string ans = "";
    if(isMonth(first) && !isMonth(second)){
        ans = "MMYY";
    } else if(!isMonth(first) && isMonth(second)){
        ans = "YYMM";
    } else if(isMonth(first) && isMonth(second)){
        ans = "AMBIGUOUS";
    } else {
        ans = "NA";
    }
    cout << ans << endl;
    return 0;
}