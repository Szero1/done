#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a == c){
        cout << b << "[cs" << a << "]=" << b << "[cs" << c << "]";
        return 0;
    }
    if (c == 10){
        int temp = 0;
        for (int i = b,j = 0;i!=0;i/=10,++j) temp += (i % 10 * pow(a,j));
        cout << b << "[cs" << a << "]=" << temp << "[cs" << c << "]";
        return 0;
    }
    int temp = 0;
    for (int i = b,j = 0;i!=0;i/=10,++j) temp += (i % 10 * pow(a,j));
    cout << b << "[cs" << a << "]=" << temp << "[cs" << c << "]";

    return 0;
}