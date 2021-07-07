#include <bits/stdc++.h>
using namespace std;
vector<int> fi;

int main()
{
    int n;
    cin >> n;
    fi.push_back(1);
    fi.push_back(1);
    for (int i = 2;fi.back() < n;++i) fi.push_back(fi[i-1] + fi[i-2]);
    while (n > 0){
        int it = lower_bound(fi.begin(),fi.end(),n) - fi.begin();
        if (fi[it] > n) --it;
        cout << fi[it] << " ";
        n = n - fi[it];
    }

    return 0;
}