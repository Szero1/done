#include <bits/stdc++.h>
using namespace std;
int main(){
    int M,N;
    cin >> M >> N;
    string S = to_string(M+N);
    string temp = S;
    sort(temp.begin(),temp.end());
    temp.erase(unique(temp.begin(),temp.end()),temp.end());
    for (auto &item:temp)
        cout << "SO LAN XUAT HIEN CHU SO " << item << ": " << count(S.begin(),S.end(),item) << "\n";
    return 0;
}