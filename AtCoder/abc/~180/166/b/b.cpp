#include<iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int s[n];
    rep(i,n) s[i]=0;
    rep(i,k){
        int d;
        cin >> d;
        int a[d];
        rep(j,d){    
            cin >> a[j];
            s[a[j]-1]++;
        }
    }

    int ans = 0;
    rep(i,n){
        if(s[i]==0){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}