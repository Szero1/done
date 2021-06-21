#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    string B(S.size(),'0');
    for (int i = 0;i<S.size();++i){
        for (int j = i-1;j>= 0;--j){
            if (S[i] > S[j]) B[i] += 1;
        }
    }
    cout << B << "\n" << S;
    return 0;
}