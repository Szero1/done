#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int x;n>0;--n){
        cin >> x;
        if (x % 3 != 0) cout << x << " ";
    }

    return 0;
}