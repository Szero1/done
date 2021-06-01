#include <bits/stdc++.h>
using namespace std;
const int k = int(1e9);
int main(){
    int n;
    cin >> n;
    int temp = log((float)k/n) / log(1.015) + 1;
    cout << "Sau " << temp / 12 << " nam " << temp % 12 << " thang";
    return 0;
}