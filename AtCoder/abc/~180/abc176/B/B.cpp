#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[200010];
    cin >> s;
    int len=strlen(s);

    int sum = 0;
    for(int i=0; i<len; i++){
//文字コードは'0'だけ引いてあげないと、正しい数字得られない．
        sum += s[i]-'0';
    }

    if(sum % 9 == 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}