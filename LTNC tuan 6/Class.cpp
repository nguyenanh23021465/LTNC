#include<bits/stdc++.h>
using namespace std;
class na
{
public:
    void input()
    {
        cin >> a >> b >> c >> d;
    }
    void output()
    {
        cout << a << endl << c << ", " << b << endl << d << endl << endl;
        cout << a << "," << b << "," << c << "," << d;
    }
private:
    int a, d;
    string b, c;
};
int main()
{
    na x;
    x.input();
    x.output();
}
