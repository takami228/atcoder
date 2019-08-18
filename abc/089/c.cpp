#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> startM;
    vector<string> startA;
    vector<string> startR;
    vector<string> startC;
    vector<string> startH;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(str[0] == 'M'){
            startM.push_back(str);
        }
        if(str[0] == 'A'){
            startA.push_back(str);
        }
        if(str[0] == 'R'){
            startR.push_back(str);
        }
        if(str[0] == 'C'){
            startC.push_back(str);
        }
        if(str[0] == 'H'){
            startH.push_back(str);
        }
    }
    if(startM.size() + startA.size()+ startR.size()+ startC.size()+ startH.size() < 3){
        cout << 0 << endl;
    } else {
        long long ans = 0;
        ans += startM.size() * startA.size() * startR.size();
        ans += startM.size() * startA.size() * startC.size();
        ans += startM.size() * startA.size() * startH.size();
        ans += startM.size() * startR.size() * startC.size();
        ans += startM.size() * startR.size() * startH.size();
        ans += startM.size() * startC.size() * startH.size();
        ans += startA.size() * startR.size() * startC.size();
        ans += startA.size() * startR.size() * startH.size();
        ans += startA.size() * startC.size() * startH.size();
        ans += startR.size() * startC.size() * startH.size();
        cout << ans << endl;
    }
    return 0;
}
