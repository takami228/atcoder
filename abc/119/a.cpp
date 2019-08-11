#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    vector<int> date;
    string tmp = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '/'){
            int a = stoi(tmp);
            date.push_back(a);
            tmp = "";
        } else {
            tmp += str[i];
        }
    }
    string ans = "";
    if(date[0] > 2019){
        ans = "TBD";
    } else if(date[0] == 2019){
        if(date[1] > 4){
            ans = "TBD";
        } else if(date[1] == 4){
            ans = "Heisei";
        } else {
            ans = "Heisei";
        }
    } else {
        ans = "Heisei";
    }
    cout << ans << endl;
    return 0;
}