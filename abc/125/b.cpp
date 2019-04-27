#include <iostream>
using namespace std;

int n;
int v[100];
int c[100];

int calc(int ans, int index){
    if(index >= n){
        return ans;
    }
    return max(calc(ans, index+1), calc(ans + v[index]-c[index], index+1));
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    cout << calc(0, 0) << endl;   
    return 0;
}