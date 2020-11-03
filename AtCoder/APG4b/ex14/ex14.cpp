#include<iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    int a[3];
    rep(i,3) cin >> a[i];
    int m1, m2;
    m1 = min(min(a[0], a[1]), a[2]);
    m2 = max(max(a[0], a[1]), a[2]);
    cout << m2 - m1 << endl;

    return 0;
}