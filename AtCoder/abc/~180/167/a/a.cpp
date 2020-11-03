#include<iostream>
using namespace std;

int main(){
    int a, b, c, k, ans;
    cin >> a >> b >> c >> k;
    if(k <= a) ans = k;
    else if(k <= a+b) ans = a;
    else ans = 2*a+b-k;

    cout << ans << endl;
    return 0;
}