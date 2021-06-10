#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int a;
    string temp = "", dau = "";
    cin >> a;
    if (a >= 0) dau = "0";
    else if (a < 0) dau = "1";
    for (a = abs(a);a!= 0;a >>= 1) temp = to_string(a % 2) + temp;
    cout << dau + temp;
    return 0;
}