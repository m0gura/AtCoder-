#include<iostream>
#include <cmath>
typedef long long int ll;
using namespace std;


double logbase(double a, double base){
    return log(a) / log(base);
}

int main(){
    ll n;
    cin >> n;
    for(ll b = 1; b <= (ll)logbase(n,5); b++){
        ll m = n - (ll)pow((long double)5,b);
        //cout << m << endl;
        ll a = 1;
        //cout << 'b' << b << endl;
        while(m >= pow(3,a)){
            //cout << 'a' << a << endl;
            if(m == pow((long double)3,a)){
                cout << a << ' ' << b << endl;
                return 0;
            }
            a++;
        }
    }
    cout << -1 << endl;
    return 0;
}

/*int main(){
    ll n;
    cin >> n;
    for(ll a=1; a<= (ll)logbase(n,3);a++){
        for(ll b=1; b<= (ll)logbase(n,5);b++){
            ll A, B;
            A = pow(3,a);
            B = pow(5,b);
            if(A + B == n){
                cout << a << ' ' << b << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}*/