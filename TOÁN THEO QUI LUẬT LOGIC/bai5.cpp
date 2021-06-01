#include <bits/stdc++.h>
using namespace std;
vector<int> A(10);

int main(){
    int n,temp = 0;
    cin >> n;
    if (n <= 0) return 0;
    A[0] = A[1] = 1;
    for (int i = 2;i<10;++i) A[i] = A[i-1] * i;
    for (;n/10!= 0;n/=10) temp = temp + A[n%10];
    cout << temp + A[n];
    return 0;
}