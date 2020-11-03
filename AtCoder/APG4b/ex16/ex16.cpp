#include<iostream>
#include<vector>
#define rep(i, n) for (int i = 1; i < n; i++)
using namespace std;

int main(){
    vector<int> a(5);
    rep(i,5) cin >> a[i];
    int cnt = 0;
    if(a[0] == a[1]) cnt++;
    if(a[3] == a[4]) cnt++;
    rep(i,4){
        if(a[i] == a[i-1] || a[i] == a[i+1]) cnt++;
    }

    if(cnt==0) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}