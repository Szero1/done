#include <bits/stdc++.h>
using namespace std;

int main()
{   
    string s;
    getline(cin,s);
    for (int i = 0,n = s.size();i< n / 2;++i) if (s[i] != s[n-i-1]){
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}