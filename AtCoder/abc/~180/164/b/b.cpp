#include<iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while(a>0 && c>0){
        a-=d;
        c-=b;
    }
    if((a>0 && c<=0)||(a<=0 && c<=0)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}