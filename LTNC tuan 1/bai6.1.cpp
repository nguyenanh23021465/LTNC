#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> rev(n);
    for(int i = 0; i < n; i++){
        rev[i] = arr[n - i - 1];
    }
    for(int i = 0; i < n; i++){
        cout << rev[i] << " ";
    }
    return 0;
}
