#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> A;
    A.push_back(0);
    for (int x,i = 1;i<=n;++i){
        cin >> x;
        A.push_back(A[i-1] + x);
    }
    for (int i = 0;i<n;++i) cout << A[i] << " ";
    return 0;
}