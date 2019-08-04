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
    string s;
    cin >> s;
    int m = s.size();
    int r = 0;
    int l = 0;
    int d[m];
    for(int i = 0; i < m; i++){
        d[i] = 0;
    }
	for(int i = 0; i < m; i++){
		if(s[i] == 'R'){
            r++;
        }
		else if(s[i] == 'L'){
            d[i-1] += r;
            r = 0;
        }
	}
    for(int i = 0; i < m; i++){
        cout << d[i] << " ";
    }
    cout << endl;    
	for(int i = m-1; i >= 0; i--){
		if(s[i] == 'L'){
            l++;
        }
		else if(s[i] == 'R'){
            d[i+1] += l;
            l = 0;
        }
	}
    for(int i = 0; i < m-1; i++){
        cout << d[i] << " ";
    }
    cout << d[m-1] << endl;
    return 0;
}