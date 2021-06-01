#include <bits/stdc++.h>
using namespace std;

int main(){
    string s[6];
    
    for (auto &item:s){
        cin.clear();
        cin >> item;
        sort(item.begin(),item.end());
        item.erase(unique(item.begin(),item.end()),item.end());
    }
    if (s[0] == s[1]) cout << "YES\n"; else cout << "NO\n";
    if (s[2] == s[3]) cout << "YES\n"; else cout << "NO\n";
    if (s[4] == s[5]) cout << "YES"; else cout << "NO";
    return 0;
}