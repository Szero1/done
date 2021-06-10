#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string temp = "";
    for (;n!= 0;n/= 16) temp = char((n%16<10)?(n%16+48):(n%16+55)) + temp;
    cout << temp;
    return 0;
}