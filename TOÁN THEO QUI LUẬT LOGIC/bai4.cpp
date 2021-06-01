#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s1,s2;
    cin >> n;
    cin.clear();
    getline(cin,s1);
    getline(cin,s2);
    for (auto &item:s1) 
        if (int(item) >= 48 && int(item) <= 57 || int(item) == 32) cout << item;
        else cout << char(int(item) + n);
    cout << "\n";
    for (auto &item:s2) if (int(item) >= 48 && int(item) <= 57 || int(item) == 32) cout << item;
        else cout << char(int(item) - n);
    return 0;
}