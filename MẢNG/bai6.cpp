#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    multiset<int> A;
    cin >> n;
    for (int x;n>0;--n){
        cin >> x;
        A.insert(x);
    }
    cin >> n;
    for (int x;n>0;--n){
        cin >> x;
        A.insert(x);
    }
    for (const int &item:A) cout << item << " ";
    return 0;
}