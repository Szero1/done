#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int x;n>0;--n){
        cin >> x;
        if (x % 3 !=0) cout << x << " ";
        else cout << "0 0 0 ";
    }
    return 0;
}