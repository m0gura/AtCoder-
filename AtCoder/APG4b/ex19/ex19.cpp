#include<iostream>
#include<vector>
using namespace std;

void saiten(vector<vector<int> > a, int &correct_count, int &wrong_count){
    for(int i=0; i < 9; i++){
        for(int j=0; j < 9; j++){
            if(a.at(i).at(j) == (i+1)*(j+1)) correct_count++;
            else{
                wrong_count++;
                a.at(i).at(j) = (i+1)*(j*1);
            }
        }
    }
}

int main(){
    vector<vector<int> > a(9, vector<int>(9));
    for(int i=0; i < 9; i++){
        for(int j=0; j < 9; j++){
            cin >> a.at(i).at(j);
        }
    }
    cout << a.at(0).at(0);
    int correct_count = 0;
    int wrong_count = 0;

    saiten(a, correct_count, wrong_count);

    for(int i=0; i < 9; i++){
        for(int j=0; j < 9; j++){
            cout << a.at(i).at(j);
            if(j < 8) cout << " ";
            else cout << endl;
        }
    }
    cout << correct_count << endl;
    cout << wrong_count << endl;
}