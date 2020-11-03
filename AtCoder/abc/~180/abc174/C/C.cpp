#include<iostream>
using namespace std;

int main(){
    long long K;
    cin >> K;
    long long a=7%K, ans=1;
    for(long long i =0; i<K; i++){
        if(a==0){
            break;
        }
        a = (10*a + 7)%K;
        ans++;
    }
    if(ans==K+1){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
    return 0;
}