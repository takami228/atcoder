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
    string s;
    cin >> n >> s;
    int count = 0;
    for(int i = 0; i < n - 2; i++){
        if(s.at(i) == 'A' && s.at(i+1) == 'B' && s.at(i+2) == 'C'){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
