#include<iostream>
using namespace std;
int main()
{
    int N, X, T, ans;
    cin >> N >> X >> T;

    ans = T*(N/X);
    if(N%X != 0){
        ans += T;
    }
    cout << ans;
    return 0;
}