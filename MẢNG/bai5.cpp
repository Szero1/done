#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin >> n >> p;
    vector<int> A(n);
    for (int &item:A) cin >> item;
    for (int i = p - 1;A.size()>1;i = (i+3) % A.size()){
        cout << A[i] << " ";
        A.erase(i + A.begin());
    }
    cout << "\n" << A[0];
    return 0;
}