#include<iostream>
#include<cmath>
#include<vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i,N) cin >> A[i];

    int sum=0;
    rep(i,N) sum += A[i];

    int ave = sum/N;

    rep(i,N){
        cout << fabs(ave - A[i]) << endl;;
    }

    return 0;
}