#include <bits/stdc++.h>
using namespace std;
vector<int> A,temp;

bool check(int l, int r){
    while (l <= r) if (A[l++] != A[r--]) return false;
    return true;
}

void process(int l,int r){
    if (l == r || check(l,r)) return;
    temp.push_back(A[l++]);
    process(l,r);
}

int main()
{
    int n;
    cin >> n;
    for (int x,i = 0;i<n;++i){
        cin >> x;
        A.push_back(x);
    }
    process(0,n-1);
    for (int &item:A) cout << item << " ";
    for (int i = temp.size() - 1;i>=0;--i) cout << temp[i] << " ";
    return 0;
}