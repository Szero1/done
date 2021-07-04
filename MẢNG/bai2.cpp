#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n+1);
    A[0] = 0;
    for (int x,i = 1;i<=n;++i){
        cin >> x;
        A[i] = A[i-1] + x;
    }
    for (int i = 0;i<n;++i) cout << A[i] << " ";
    return 0;
}