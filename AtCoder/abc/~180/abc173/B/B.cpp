#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int c0=0, c1=0, c2=0, c3=0;

    for(int i=0; i<N; i++){
        string S;
        if(S=="AC")
        {
            c0++;
        }
        if (S == "WA")
        {
            c1++;
        }
        if (S == "TLE")
        {
            c2++;
        }
        if (S == "RE")
        {
            c3++;
        }
    }

    cout << "AC x " << c0 << endl;
    cout << "WA x " << c1 << endl;
    cout << "TLE x " << c2 << endl;
    cout << "RE x " << c3 << endl;
    return 0;
}