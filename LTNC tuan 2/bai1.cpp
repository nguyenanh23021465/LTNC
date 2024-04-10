#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num = n;
        int ans = 0;
        while(n != 0){
            int x = n % 10;
            if(x != 0 && num % x == 0){
                ans++;
            }
                n /= 10;
        }
        cout << ans << endl;
    }

}
