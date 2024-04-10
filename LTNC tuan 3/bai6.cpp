#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    if(k <= 26){
        for(int i = 0; i < n; i++){
            if(65 <= s[i] && s[i] <= (90 - k)){
                s[i] += k;
            }
            else if((90 - k) < s[i] && s[i] <= 90){
                s[i] = s[i] + k - 26;
            }
            else if(97 <= s[i] && s[i] <= (122 - k)){
                s[i] += k;
            }
            else if((122 - k) < s[i] && s[i] <= 122){
                s[i] = s[i] + k - 26;
            }
            else if(65 > s[i] && s[i] > 90 || 97 > s[i] && s[i] > 122){
                continue;
            }
    }
    cout << s << endl;
    }
    else{
        for(int i = 0; i < n; i++){
            if(65 <= s[i] && s[i] <= 90){
                int ans = s[i] + k - 'A';
                int letter = ans % 26;
                s[i] = 'A' + letter;
            }
            else if(97 <= s[i] && s[i] <= 122){
                int ans = s[i] + k - 'a';
                int letter = ans % 26;
                s[i] = 'a' + letter;
            }
            else if(65 > s[i] && s[i] > 90 || 97 > s[i] && s[i] > 122){
                continue;
            }
        }
        cout << s << endl;
    }
}
