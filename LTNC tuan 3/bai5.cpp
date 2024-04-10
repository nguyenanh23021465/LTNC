#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string ans = "hackerrank";
        int j = 0;
        int cnt = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ans[j]){
                j++;
                cnt++;
            }
        }
        if(cnt == ans.length()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
