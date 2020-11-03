#include<iostream>
using namespace std;

int main(){
    int n, k, x, y, ans=0;
    cin >> n >> k >> x >> y;
    if(n > k) cout << x*k + (n-k)*y << endl;
    else cout << x*n << endl;

    return 0;
}