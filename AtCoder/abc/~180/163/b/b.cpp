#include<iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[m];
    long sum = 0;
    rep(i,m){
        cin >> a[i];
        sum += a[i];
    }
    if(n-sum>=0) cout << n-sum << endl;
    else cout << -1 << endl;
    return 0;
}