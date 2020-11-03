#include<iostream>
#include<set>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(4);
    cout << *begin(s) << endl;
}