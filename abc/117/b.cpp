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
    int n;
    cin >> n;
    int l;
    int lmax = 0;
    int lsum = 0;
    for(int i = 0; i < n; i++){
        cin >> l;
        lmax = max(lmax, l);
        lsum += l;
    }
    if(lmax < lsum - lmax){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}