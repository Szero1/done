#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    long long int a[5],b[5];
    for (int i = 0;i<5;++i) {
        if (i > n % 5 || i == 0) a[i] = n / 5; else a[i] = n / 5 + 1;
        if (i > m % 5 || i == 0) b[i] = m / 5; else b[i] = m / 5 + 1;
    }
    long long int temp = a[0]*b[0];
    for (int i = 1 ;i <5;++i) temp = temp + a[i] * b[5-i];
    cout <<temp;
    return 0;
}