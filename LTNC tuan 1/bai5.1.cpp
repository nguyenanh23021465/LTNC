#include<bits/stdc++.h>
using namespace std;

int sln(int a, int b, int c, int d){
    int arr[] = {a, b, c, d};
    sort(arr, arr + 4);
    return arr[3];
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = sln(a, b, c, d);
    cout << ans;
}
