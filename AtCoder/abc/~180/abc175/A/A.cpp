#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int ans;
    if(S == "RRR")
        ans = 3;
    if (S == "RRS")
        ans = 2;
    if (S == "RSR")
        ans = 1;
    if (S == "SRR")
        ans = 2;
    if (S == "RSS")
        ans = 1;
    if (S == "SRS")
        ans = 1;
    if (S == "SSR")
        ans = 1;
    if (S == "SSS")
        ans = 0;
    cout << ans << endl;

    return 0; 
}