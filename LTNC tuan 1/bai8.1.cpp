#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        ll sum1 = 0, sum2 = 0;
        ll left = 0, right = n - 1;
        while(left < right){
            if(sum1 <= sum2){
                sum1 += a[left];
                left++;
            }
            else{
                sum2 += a[right];
                right--;
            }
        }
        if(sum1 == sum2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
