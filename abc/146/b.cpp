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
    int n;
    string str;
    cin >> n >> str;
    char alphabets[26];
    for(int i = 0; i < 26; i++){
        alphabets[i] = 'A' + i; 
    }
    for(int i = 0; i < str.size(); i++){
        int index = str.at(i) - 'A';
        index = (index + n) % 26;
        cout << alphabets[index];
    }
    cout << endl;
    return 0;
}
