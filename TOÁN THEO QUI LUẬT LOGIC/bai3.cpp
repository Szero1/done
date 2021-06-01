#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> S;
    for (int i = 2;n!= 1;++i)
        while (n % i == 0){
            n /= i;
            S.push_back(i);
        }
    for (int i = 0;i< S.size()-1;++i) cout << S[i] << "*";
    cout << S[S.size()-1];
    return 0;
}