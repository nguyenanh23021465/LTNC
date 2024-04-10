#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char a[n + 5][n + 5];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            a[i][j] = '#';
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            a[i][j] = ' ';
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}
