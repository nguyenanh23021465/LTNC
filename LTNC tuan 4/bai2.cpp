#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        m[arr[i]]++;
    }
    int maxx = 0;
    for(auto x : m){
        if(x.second > maxx){
            maxx = x.second;
        }
    }
    int ans = n - maxx;
    cout << ans << endl;
}
