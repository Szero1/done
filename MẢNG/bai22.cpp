#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("Labai.INP","r",stdin);
    freopen("Labai.OUT","w",stdout);
    
    int n;
    cin >> n;
    set<int> f;
    for (int x,i = 0;i<n;++i){
        cin >> x;
        f.insert(x);
    }
    cout << f.size() << "\n";
    for (const int &item:f) cout << item << ' ';


    return 0;
}