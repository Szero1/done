#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> A;

bool compair(pair<int,int> x,pair<int,int> y){
    return (x.first - x.second) < (y.first - y.second);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("GIFT.INP","r",stdin);
    freopen("GIFT.OUT","w",stdout);

    cin >> n;
    for (int i = 0;i<n;++i){
        int x,y;
        cin >> x >> y;
        A.push_back(make_pair(x,y));
    }
    sort(A.begin(),A.end(),compair);
    int s = 0;
    for (int i = 0;i< n/2;++i) s += A[i].second;
    for (int i = n/2;i<n;++i) s += A[i].first;
    cout << s; 
    return 0;
}