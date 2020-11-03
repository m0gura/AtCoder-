#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define rep(i, n) for (long long i = 0; i < n; i++)
using namespace std;

int main(){
    long long x, k, d;
    cin >> x >> k >> d;
    x = fabs(x);
    if(x/d >= k){
        cout << x-d*k << endl;
        return 0;
    }
    long long e = x/d, ans;
    if(k%2==1) ans = fabs(x-d);
    else ans = x-e*d;

    cout << ans << endl;
    return 0;
}