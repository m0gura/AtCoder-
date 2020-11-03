#include<iostream>
using namespace std;

int main(){
    int x, m, n;
    cin >> x;
    m = x/500;
    n = (x - 500*m)/5;
    cout << 1000*m+5*n << endl;
}