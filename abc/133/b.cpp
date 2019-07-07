#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

double dist(vector<int> a, vector<int> b){
    double dist = 0;
    for(int i = 0; i < a.size(); i++){
        dist += (a[i] - b[i])*(a[i] - b[i]);
    }
    return sqrt(dist);
}

int main(){
    int n, d;
    cin >> n >> d;
    vector< vector<int> > x;
    for(int i = 0; i < n; i++){
        vector<int> y;
        for(int j = 0; j < d; j++){
            int a;
            cin >> a;
            y.push_back(a);
        }
        x.push_back(y);
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            double t = dist(x[i], x[j]); 
            if(ceil(t) == floor(t)){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}