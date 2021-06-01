#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,S = 0,posB = -1,posE = -1;
    cin >> n;
    if (n <= 0 || n >= 50) return 0;
    vector<int> A(n);
    for (auto &item:A) cin >> item;
    if (count(A.begin(),A.end(),0) < 2) return 0;
    for(int i = 0;i<n;++i){
        if (posB == -1 && A[i] == 0) posB = i;
        if (posE == -1 && A[n-1-i] == 0 ) posE = n - 1 - i;
        if (posB != -1 && posE != -1) break;
    }
    for (int i = posB+1; i < posE;++i) S += A[i];
    cout << S;
    return 0;
}