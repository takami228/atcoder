#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return (a * b) / gcd(a, b);        
}

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long e = min(c, d);
    long long f = max(c, d);
    long long g = lcm(c, d);
    long long tmp = (b - a + 1);
    long long x = b / e - a / e;
    if(a % e == 0){
        x += 1;
    }
    long long y = b / f - a / f;
    if(a % f == 0){
        y += 1;
    }
    long long z = b / g - a / g;
    if(a % g == 0){
        z += 1;
    }
    long long ans = (b - a + 1) - (x + y - z);
    cout << ans << endl;
    return 0;
}