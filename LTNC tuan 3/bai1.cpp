#include<bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    string c, d;
    c.push_back(b[0]);
    d.push_back(a[0]);
    for(int i = 1; i < a.size(); i++){
        c.push_back(a[i]);
    }
    for(int i = 1; i < b.size(); i++){
        d.push_back(b[i]);
    }
    cout << c << " " << d;
}

