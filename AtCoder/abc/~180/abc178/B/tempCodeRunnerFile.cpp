#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    char n[4];
    n[0] = a*c;
    n[1] = a*d;
    n[2] = b*c;
    n[3] = b*d;

    long long m = n[0];

    for(int i=0; i<4; i++){
        if(m < n[i]){
            m = n[i];
        }
    }
    cout << m;
    return 0;
}