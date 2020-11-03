#include<iostream>
#include<string>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    string s;
    cin >> s;

    int l = s.size();
    int n =(l-1)/2;
    string a[n];

    rep(i, n){
        a[i] = s.substr(2*i+1, 2); //'+1','-1'の配列a[i]
    }

    int ans = 1;
    rep(i,n){
        if(a[i] == "+1") ans++;
        else ans--;
    }
    cout << ans << endl;

    return 0;
}