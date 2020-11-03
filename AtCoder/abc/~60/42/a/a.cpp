#include<iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    int cnt5=0, cnt7=0;
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    rep(i,3){
        if(a[i] == 5) cnt5++;
        else if(a[i] == 7) cnt7++;
    }

    if(cnt5 == 2 && cnt7 == 1) cout << "YES" <<endl;
    else cout << "NO" << endl;

    return 0;
}