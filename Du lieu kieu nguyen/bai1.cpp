#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    string temp = "";
    cin >> n;
    for (;n != 0; n>>=1) temp = to_string(n%2) + temp;
    cout << temp;
    return 0;
}