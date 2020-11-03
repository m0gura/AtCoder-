#include<iostream>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;
    int l = S.length();
    int ans = 0;

    for(int i=0; i<l; i++){
        if(S[i] != T[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}