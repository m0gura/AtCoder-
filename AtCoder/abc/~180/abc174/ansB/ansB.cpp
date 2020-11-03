#include<iostream>
#define rep(i,n) for (int i=0;i<n; ++i)
using namespace std;

int main(){
    int n;
    long long d;
    cin >> n >> d;
    int ans = 0;
    rep(i,n){
        long long x, y;
        cin >> x >> y;
        if (x*x+y*y <= d*d) ans++;
    }
    cout << ans << endl;
    return 0;

}