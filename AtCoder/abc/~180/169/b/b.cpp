#include<iostream>
#include<cmath>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;


int main(){
    int n;
    cin >> n;
    long long a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
        if (a[i]==0){
            cout << 0 << endl;
            return 0;
        }
    }
    long long prod=1;
    
    rep(i,n){        
        if(a[i] > 1000000000000000000.0/prod){
            cout << -1 << endl;
            return 0;
        }
        prod = a[i] * prod;
    }
    if(prod > 1000000000000000000){
        cout << -1 << endl;
        return 0;
    }

    cout << prod << endl;
    return 0;
}