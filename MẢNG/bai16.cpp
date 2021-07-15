#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> f(2);
int n;

bool search(int i){
    vector<int> A;
    if (f[0][i] < f[1][i]) return false;
    A.push_back(f[0][i]);
    int d = i+n;
    for (int j = i + 1;j<=d;++j){
        A.push_back(A.back() - f[1][j-1]);
        if (A.back() < 0) return false;
        A[A.size()-1] += f[0][j];
    }
    if (A.back() < 0) return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (auto &item:f) for (int x,i = 0;i<n;++i){
            cin >> x;
            item.push_back(x);
        }
    for (auto &item:f) for (int i = 0;i < n;++i) item.push_back(item[i]);
    for (int i = 0;i<n;++i) if (search(i)) cout << i+1 << "\n";
    return 0;
}