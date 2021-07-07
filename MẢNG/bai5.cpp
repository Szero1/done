#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,p;
    cin >> n >> p;
    vector<int> A;
    for (int x,i = 0;i<n;++i){
        cin >> x;
        A.push_back(x);
    }
    for (int i = p - 1;A.size()>1;i = (i+3) % A.size()){
        cout << A[i] << " ";
        A.erase(i + A.begin());
    }
    cout << "\n" << A[0];
    return 0;
}