#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> A,pair<int,int> B){
    return ((float) A.first/A.second) < ((float) B.first / B.second);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("BAI5.INP","r",stdin);
    freopen("BAI5.OUT","w",stdout);

    vector<pair<int,int>> f;
    int n;

    cin >> n;
    for (int x,y,i= 0;i<n;++i){
        cin >> x >> y;
        f.push_back(make_pair(x,y));
    }
    sort(f.begin(),f.end(),compare);
    int temp = f[0].first;
    int s = f[0].first * f[0].second;
    for (int i = 1;i<n;++i){
        temp += f[i].first;
        s += (temp*f[i].second);
    }
    cout << s;
    return 0;
}