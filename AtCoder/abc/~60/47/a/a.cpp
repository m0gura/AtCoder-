#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b+c){
        cout << "Yes" << endl;
        return 0;
    }
    else if(b == a+c){
        cout << "Yes" << endl;
        return 0;
    }
    else if(c == b+a){
        cout << "Yes" << endl;
        return 0;
    }
    else cout << "No" << endl;

    return 0;
}