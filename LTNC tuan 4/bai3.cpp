#include<bits/stdc++.h>
using namespace std;
bool check(string s, int n)
{
    int l = 0, r = n - 1;
    int cnt = 0;
    while(l < r){
        if(s[l] == s[r]){
            cnt++;
            l++, r--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        unsigned int n = s.length();
        if(check(s, n)){
            cout << "-1" << endl;
        }
        else{
            int l = 0, r = n - 1;
            while(l < r){
                if(s[l] == s[r]){
                    l++, r--;
                }
                else{
                    if(s[l] == s[r - 1] && s[l + 1] == s[r - 2]){
                        cout << r << endl;
                        break;
                    }
                    if(s[l + 1] == s[r] && s[l + 2] == s[r - 1]){
                        cout << l << endl;
                        break;
                    }
                }
            }
        }
    }
}
