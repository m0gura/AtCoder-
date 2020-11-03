#include<iostream>
using namespace std;
typedef long long int ll;

int main(){
    ll x, y;
    int a, b;
    cin >> x >> y >> a >> b;
    ll cnt = 0;
    while(x<y){
        if(x >= (double)b/(a-1)) x*=a;
        else x+=b;
        cnt++;
    }
    cout << cnt << endl;
}