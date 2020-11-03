#include<iostream>
#include<cstdio>
#include<cmath>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    long d1=0, d3=0;
    double d2=0;
    int n;
    cin >> n;
    int x[n];
    rep(i,n) cin >> x[i];

    rep(i,n) x[i] = fabs(x[i]);

    //d1
    rep(i,n) d1 += x[i];

    //d2
    long long a = 0;
    rep(i,n) a += pow(x[i], 2);
    d2 = sqrt(a);

    //d3
    int max = x[0];
    rep(i,n) if(x[i]>max) max = x[i];
    d3 = max;

    printf("%ld\n%.10f\n%ld\n", d1, d2, d3);

    return 0;
}