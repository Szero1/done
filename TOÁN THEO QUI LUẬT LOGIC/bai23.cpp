#include <bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin.clear();
    getline(cin,S);
    for (auto &item:S) if ((item < '0' || item > '9') && (item < 'a' || item > 'z')) return 0;
    sort(S.begin(),S.end());
    S.erase(unique(S.begin(),S.end()),S.end());
    cout << S.size();
    return 0;
}