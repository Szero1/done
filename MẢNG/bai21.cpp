#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,s = 0;
    cin >> n;
    map<int,int> f;
    for (int x,i = 0;i<n;++i){
        cin >> x;
        f[x]++;
        s = max(s,f[x]);
    }
    cout << f.size() << "\n" << s; 

    return 0;
}