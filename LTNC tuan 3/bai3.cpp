#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string h = s.substr(0,2);
    string time = s.substr(2, 6);
    int x = stoi(h);
    if(s[8] == 'P'){
        if(x == 12){
            cout << x << time << endl;
        }
        else{
            cout << x + 12 << time << endl;
        }
    }
    if(s[8] == 'A'){
        if(x == 12){
            cout << "00" << time << endl;
        }
        else{
            if(x < 10){
                cout << "0" << x << time << endl;
            }
            else{
                cout << x << time << endl;
            }
        }
    }
}
