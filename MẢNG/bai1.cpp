#include <bits/stdc++.h>
using namespace std;
vector<int> f;

bool check(int &a){
    for (auto &tiem:f) if (a == tiem) return false;
    return true;
}

int main()
{   
    pair<int,int> U = make_pair(INT32_MAX,INT32_MIN);
    int n;
    cin >> n;
    for (int x,i = 0;i<n;++i){
        cin >> x;
        U.second = max(U.second,x);
        U.first = min(U.first,x);
        if (x % 10 == 0) f.push_back(x / 10);
    }
    (U.first /=10)++;
    U.second /= 10;
    for (int i = U.first;i<= U.second;++i){
        if (check(i)) cout << i * 10 << " ";
    }

    return 0;
}