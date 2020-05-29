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

void print_ans(bool flag){
    if(flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }   
}

int main(){
    int n;
    cin >> n;
    bool ans = false;
    for(int i = 1; i <= sqrt(n); i++){
        ans |= (((n % i) == 0) && (n / i <= 9));
    }
    print_ans(ans);
    return 0;
}
