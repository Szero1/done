#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n;
    cin >> n;
    s = s.substr(n,s.size()) + s.substr(0,n);
    cout << s;
    return 0;
}