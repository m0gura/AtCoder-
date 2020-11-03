#include<iostream>
#include<cmath>
using namespace std;
const long long mod=pow(10,9)+7;

long long powmod(long long x, long long y){
    long long res = 1;
    for(long long i=0; i<y; i++){
        res = res*x%mod;
    }
    return res;
}

int main()
{
    long long N;
    cin >> N;
    long long ans;
    ans = powmod(10,N) - 2*powmod(9,N) +powmod(8,N);
    ans = ans%mod;

    cout << ans << endl;
    return 0;
}