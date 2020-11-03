#include<iostream>
#include<vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int aa=0, bb=0, cc=0;
    vector<int> a(n), b(n), c(n);
    rep(i,n){
        cin >> a[i]; aa+=a[i];
    }
    rep(i,n){
        cin >> b[i]; bb+=b[i];
    }
    rep(i,n){
        cin >> c[i]; cc+=c[i];
    }
    cout << aa*bb*cc << endl;
    return 0;
}