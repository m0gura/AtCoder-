#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    string s1 = s.substr(0,(n-1)/2), s2 = s.substr((n+1)/2,(n-1)/2);
    string rs, rs1, rs2;
    rs = s;
    rs1 = s1;
    rs2 = s2;
    reverse(rs.begin(), rs.end());
    reverse(rs1.begin(), rs1.end());
    reverse(rs2.begin(), rs2.end());

    if(s==rs && s1==rs1 && s2==rs2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}