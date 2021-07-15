#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("INSUL.INP","r",stdin);
    freopen("INSUL.OUT","w",stdout);
    int n,s= 0 ;
    cin >> n;
    vector<int> f;
    for(int x,i = 0;i<n;++i){
        cin >> x;
        s += x;
        f.push_back(x);
    }
    sort(f.begin(),f.end());
    for (int l = 0,r = n - 1;l < r;++l,--r){
        s += max(0,f[r] - f[l]);
    }
    cout << s;
    return 0;
}