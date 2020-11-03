#include<iostream>
#define rep(i, k, n) for (int i = k; i < n; i++)
typedef long long int ll;
using namespace std;

int main(){
    int n, m=1000000000 + 7;
    cin >> n;
    
    ll a[n];
    ll s=0;
    rep(i, 0, n){
        cin >> a[i];
    }
    /*rep(i, 0, n){
        rep(j, i+1, n){
            cout << i << ' ' << j << endl;
            s += a[i]*a[j];
        }
    }*/

    rep(i, 0, n){
        rep(j, i+1, n){
            ll p, q, r;
            p = a[i]%m;
            q = a[j]%m;
            r = (ll)p*q;
            s += r%m;
        }
    }
    cout << s << endl;
    return 0;
}