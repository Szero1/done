#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s = 0;
    cin >> n;
    if (n <= 0 ) return 0;
    for (int i = 1; i<= n/2;++i)
        if (n%i==0) s+=i;
    if (n == s) cout << "YES";
    else cout << "NO";
    return 0;
}