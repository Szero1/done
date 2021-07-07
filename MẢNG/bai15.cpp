#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> gT;
    vector<pair<int,int>> KQ;
    gT.push_back(1);
    gT.push_back(1);
    gT.push_back(2);
    for (int i = 3;gT.back() < n;++i) gT.push_back(i*gT[i-1]);
    while (n > 0){
        int it = lower_bound(gT.begin(),gT.end(),n) - gT.begin();
        if (gT[it] > n) --it;
        if (it == 0) ++it;
        int a = n / gT[it];
        KQ.push_back(make_pair(a,it));
        n = n - gT[it] * a;
    }
    for (int i = KQ.size() - 1;i>=0;--i)
        cout << "D[" << KQ[i].second << "]=" << KQ[i].first << "*" << gT[KQ[i].second] << "=" << KQ[i].first * gT[KQ[i].second] << "\n";

    return 0;
}