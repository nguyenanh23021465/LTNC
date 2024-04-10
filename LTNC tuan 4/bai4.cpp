#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        int x;
        for(int j = 0; j < m; j++){
            cin >> x;
            a[i].push_back(x);
        }
    }
    int r, s;
    for(int k = 1; k <= q; k++){
        cin >> r >> s;
        cout << a[r][s] << endl;
    }
}
