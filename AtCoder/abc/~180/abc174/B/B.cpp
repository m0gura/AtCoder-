#include<iostream>
#include<vector>
#define rep(i,n) for(int i=0;i < n; i++)
using namespace std;

int main(){
    int N;
    long long D;
    cin >> N >> D;
    vector<long long> X(N);
    vector<long long> Y(N);

    rep(i,N){
        cin >> X[i] >> Y[i];
    }
    int ans=0;

    rep(i,N){
        if(X[i]*X[i]+Y[i]*Y[i] <= D*D){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}