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
using ll = long long;

int main(){
    string s;
    cin >> s;
    int a = s.size()+1;
    int z = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            a = min(a, i);
        }
        if(s[i] == 'Z'){
            z = max(z, i);
        }
    }
    cout << z - a + 1 << endl;
    return 0;
}
