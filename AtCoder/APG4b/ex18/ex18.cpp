#include<iostream>
#include<vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    int n ,m;
    cin >> n >> m;

    if(m == 0){
        cout << '-' << endl; return 0;
    }

    vector<vector<char> > data(n, vector<char>(n, '-'));
    vector<int> a(m), b(m);
    rep(i,m){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }

    rep(i,m){
        data[a[i]][b[i]] = 'o';
        data[b[i]][a[i]] = 'x';
    }

    rep(i,n){
        rep(j,n){
            if(j == 0) cout << data[i][j];
            else if(j == n-1) cout << ' ' << data[i][j] << endl;
            else  cout << ' ' << data[i][j];
        }
    }

    return 0;
}