#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int search(int l, int r, int x)
{
    if(l == r){
        return l;
    }
    int mid = l + (r - l)/2;
    if(x <= a[mid]){
        return search(l, mid, x);
    }
    else{
        return search(mid + 1, r, x);
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    sort(a + 1, a + n + 1);
    int ans = search(1, n, x);
    cout << ans;
}
