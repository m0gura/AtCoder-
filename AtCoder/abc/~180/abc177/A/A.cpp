#include <iostream>
using namespace std;

int main()
{
    double D, T, S;
    cin >> D >> T >> S;
    if (D / S <= T)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}