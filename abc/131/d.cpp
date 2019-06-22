#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct work{
    int time;
    int limit;

    work(int inputted_time, int inputted_limit){
        time = inputted_time;
        limit = inputted_limit;
    }
    bool operator<(const work &another) const{
        return limit < another.limit;
    };
};

int main(){
    int n;
    cin >> n;
    int a[n+1];
    int b[n+1];
    vector<work> worklist;
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
        worklist.push_back(work(a[i], b[i]));
    }
    sort(worklist.begin(), worklist.end());
    int now = 0;
    string ans = "Yes";
    for(int i = 0; i < worklist.size(); i++){
        now += worklist[i].time;
        if(now > worklist[i].limit){
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}