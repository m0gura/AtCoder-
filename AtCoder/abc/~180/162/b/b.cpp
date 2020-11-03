#include<iostream>
#define rep(i, n) for (int i = 1; i <= n; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    long sum=0;
    rep(i,n){
        if(i%3!=0 && i%5!=0) sum+=i; 
    }
    cout << sum << endl;
}