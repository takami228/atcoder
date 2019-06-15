#include <iostream>
#include <string>
using namespace std;

int dfs(string str, int score){
    cout << str << " " << score << endl;
    if(str == ""){
        return score;
    }
    int ans = 0;
    for(int i = 0; i < str.length()-1; i++){
        if((str.at(i) == '0' && str.at(i+1) == '1') || (str.at(i) == '1' && str.at(i+1) == '0')){
            string str_new = "";
            if(i == 0){
                cout << "a" << " " << i << endl;
                str_new = str.substr(2);
            } else if(i == str.length()-1){
                cout << "b" << " " << i << endl;
                str_new = str.substr(0, str.length()-2);
            } else {
                cout << "c" << " " << i << endl;
                str_new = str.substr(0, i) + str.substr(i+2);
            }
            ans = dfs(str_new, score + 2);
        }
        ans = max(ans, score);
        cout << str << " " << i << " " << ans << " " << score << endl;;  
    }
    return ans;
}

int main(){
    string str;
    cin >> str;
    cout << dfs(str, 0) << endl;
    return 0;
}