#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[1020];
    cin >> s;
    int l;
    string ans;
    l = strlen(s);

    if(s[l-1]=='s'){
        ans = strcat(s, "es");
        cout << ans;
    }
    else{
        ans = strcat(s, "s");
        cout << ans;
    }

    return 0;
}