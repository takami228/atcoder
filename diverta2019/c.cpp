#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int end_a = 0;
    int start_b = 0;
    int start_b_and_a = 0;
    int include_ab = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s.at(0) == 'B' && s.at(s.size()-1) != 'A'){
            start_b++;
        }
        if(s.at(0) != 'B' && s.at(s.size()-1) == 'A'){
            end_a++;
        }
        if(s.at(0) == 'B' && s.at(s.size()-1) == 'A'){
            start_b_and_a++;
        }
        for(int i = 0; i < s.size()-1; i++){
            if(s.at(i) == 'A' && s.at(i+1) == 'B'){
                include_ab++;
            }
        }
    }
    int ans = include_ab;
    if(start_b + end_a == 0 && start_b_and_a > 0){
        ans += start_b_and_a - 1;
    } else {
        ans += start_b_and_a + min(start_b, end_a);
    }
    cout << ans << endl;
    return 0;
}