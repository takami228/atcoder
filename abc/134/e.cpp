#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    vector<int> v;
    bool isWorstCase = true;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 2; i <= n; i++){
        isWorstCase &= (a[i-1] >= a[i]);
    }
    if(isWorstCase){
        cout << n << endl;
    } else {
        v.push_back(a[1]);
        for(int i = 2; i <= n; i++){
            bool isAddColor = true;
            for(int j = 0; j < v.size(); j++){
                if(v[j] < a[i]){
                    v[j] = a[i];
                    isAddColor = false;
                    break;
                }
            }
            if(isAddColor){
                v.push_back(a[i]);
            }
        }
        cout << v.size() << endl;
    }
    return 0;
}