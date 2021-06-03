#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,count;
    cin >> m >> n;
    if (m <= 1 || m >= n|| n > 50) return 0;
    vector<float> A(n+1),B(m+2),D(m+2);
    A[0] = B[0] = 0;
    B[m+1] = INFINITY;
    for (int i = 1;i<=n;++i) cin >> A[i];
    for (int i = 1;i<=m;++i) cin >> B[i];
    for (auto &item:A) if (item < B[1]) ++count;
    D[0] = count;
    for (int i = 1; i <= m;++i){
        count = 0;
        for (auto &item:A) if (item >= B[i] && item < B[i+1]) ++ count;
        D[i] = count; 
    }
    count = 0;
    for (auto &item:A) if (item >= B[m]) ++count;
    D[m+1] = count;
    for (auto &item:D) cout << item << " ";
    return 0;
}