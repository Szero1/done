#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s = 0;
    cin >> n;
    if (n <= 0 ) return 0;
    for (int i = 2; i< n;++i)
        for (int j = n; j % i == 0;j /= i) s+=i;
    if (n == s + 1) cout << "YES";
    else cout << "NO";
    return 0;
}