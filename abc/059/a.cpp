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

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    transform(s1.cbegin(), s1.cend(), s1.begin(), towupper);
    transform(s2.cbegin(), s2.cend(), s2.begin(), towupper);
    transform(s3.cbegin(), s3.cend(), s3.begin(), towupper);
    cout << s1[0] << s2[0] << s3[0] << endl;
    return 0;
}
