#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    if (N < 3 || N >35) return 0;
    vector<float> B(N+2),D;
    B[0] = B[N+1] = INFINITY;
    for (int i = 1;i<=N;++i) cin >> B[i];
    for (int i = 1; i <= N;++i) if (B[i] < B[i-1] && B[i] < B[i+1]) cout  << B[i] << " "; 
    return 0;
}