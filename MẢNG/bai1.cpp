#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    pair<int,int> U = make_pair(INT32_MAX,INT32_MIN);
    int n;
    cin >> n;
    map<int,int> f;
    for (int x,i = 0;i<n;++i){
        cin >> x;
        U.second = max(U.second,x);
        U.first = min(U.first,x);
        if (x % 10 == 0) f[x / 10] = 1;
    }
    U.first /=10;
    U.second /= 10;
    for (int i = ++U.first;i<=U.second;++i) if (!f[i]) cout << i * 10 << " ";

    return 0;
}