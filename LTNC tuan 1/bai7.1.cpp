#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    double pos = 0, neg = 0, zero = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > 0){
            pos++;
        }
        else if(a[i] < 0){
            neg++;
        }
        else{
            zero++;
        }
    }
    cout << setprecision(6) << fixed << pos/n << endl;
    cout << setprecision(6) << fixed << neg/n << endl;
    cout << setprecision(6) << fixed << zero/n << endl;
}
