#include <bits/stdc++.h>
using namespace std;
vector<int> f;
int n;

bool check(int a){
    vector<int> temp = f;
    start:
        int it = lower_bound(temp.begin(),temp.end(),a) - temp.begin();
        if (it >=temp.size()) --it;
        if (temp[it] > a) --it;
        a = a - temp[it];
        if (a == 0) return false;
        if (it == 0 && a != 0) return true;
        temp.erase(temp.begin()+it);
        if (temp.size() == 0 && a != 0) return true;
    goto start;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int x,i = 0;i<n;++i){
        cin >> x;
        f.push_back(x);
    }
    sort(f.begin(),f.end());
    int i = f.front();
    while (!check(i)) ++i;
    cout << i;
    return 0;
}