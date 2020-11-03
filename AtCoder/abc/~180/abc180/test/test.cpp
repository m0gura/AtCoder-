#include <iostream>
using namespace std;

int main()
{
    //だめ　cout << (100000 * 100000) << endl;
    int x = 100000;
    cout << (x * x) << endl; //だめ
    long y = x * x; //だめ
    cout << y << endl;
    long z = x * (long)x;
    cout << z << endl;
}