#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    void input()
    {
        cin >> a >> b >> c >> d >> e;
    }
    int calculateTotalScore()
    {
        scores = a + b + c + d + e;
        return scores;
    }
private:
    int a, b, c, d, e, scores = 0;
};
int main()
{
    int n;
    cin >> n;
    Student a[n + 5];
    for(int i = 1; i <= n ; i++){
        a[i].input();
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(a[i].calculateTotalScore() > a[1].calculateTotalScore()){
            ans++;
        }
    }
    cout << ans;
}
