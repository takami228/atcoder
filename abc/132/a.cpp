#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> vec;
    for(int i = 0; i < s.size(); i++){
        vec.push_back(s.at(i));
    }

    sort(vec.begin(), vec.end());

    if(vec[0] == vec[1] && vec[2] == vec[3] && vec[0] != vec[2]){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}