#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end());

    int m = n / 2;
    int ans = vec[m] - vec[m-1]; 
    cout << ans << endl;
    return 0;
}