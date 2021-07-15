#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<int> f;
    int n;
    cin >> n;
    for (int i;n>0;--n){
        cin >> i;
        f.insert(i);
    }
    cout << f.size();
    return 0;
}