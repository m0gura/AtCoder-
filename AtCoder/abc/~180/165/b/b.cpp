#include<iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    long x, m=100, cnt=0;
    cin >> x;
    while(m < x){
        m += m/100;
        cnt++;
    }
    cout << cnt << endl;
}