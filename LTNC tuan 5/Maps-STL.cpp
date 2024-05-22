#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    while(n--){
        int t;
        cin >> t;
        if(t == 1){
            string a;
            int b;
            cin >> a >> b;
            mp[a] += b;
        }
        else{
            string a;
            cin >> a;
            if(t == 2){
                mp[a] = 0;
            }
            else{
                cout << mp[a] << endl;
            }
        }
    }
}
