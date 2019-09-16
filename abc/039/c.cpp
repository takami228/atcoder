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
    map<string, string> m;
    m["WBWBWWBWBWBWWBWBWWBW"] = "Do";
    m["WBWWBWBWBWWBWBWWBWBW"] = "Re";
    m["WWBWBWBWWBWBWWBWBWBW"] = "Mi";
    m["WBWBWBWWBWBWWBWBWBWW"] = "Fa";
    m["WBWBWWBWBWWBWBWBWWBW"] = "So";
    m["WBWWBWBWWBWBWBWWBWBW"] = "La";
    m["WWBWBWWBWBWBWWBWBWWB"] = "Si";
    cout << m[s] << endl;
    return 0;
}
