#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int a = (n / 2) + 1;
    int b = (p / 2) + 1;
    int ans = min(b - 1, a - b);
    cout << ans << endl;

}
