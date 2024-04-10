#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n + 1);
    int suma = 0;
    int sumb = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        suma += a[i];
    }
    for(int i = 0; i <= n; i++){
        cin >> b[i];
        sumb += b[i];
    }
    int ans = sumb - suma;
    cout << ans;
}
