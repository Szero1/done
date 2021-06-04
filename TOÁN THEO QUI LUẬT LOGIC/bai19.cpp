#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,S = 0,posB = -1,posE = -1;
    cin >> n;
    if (n <= 0 || n >= 50) return 0;
    int A[n];
    for (int i = 0;i<n;++i){
        cin >> A[i];
        if (posB == -1 && A[i] == 0) posB = i ;
        if (A[i] == 0) posE = i ;
        if (posB != -1) S+= A[i];
    }
    if (posB == -1 || posE == -1) return 0;
    for (int i = n-1;i>posE;--i) S -= A[i];
    cout << S;
    return 0;
}