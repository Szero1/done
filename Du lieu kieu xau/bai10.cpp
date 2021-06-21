#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin >> t >> s;
    int pre[s.size()];
    pre[0] = -1;
    for (int i = 1,k = -1;s[i];++i){
        while (k >= 0 && s[k+1] != s[i]) k = pre[k];
        if (s[k+1] == s[i]) ++k;
        pre[i] = k;
    }
    /*for (int i = 0,k = -1;t[i];++i){
        while (k >= 0 && s[k+1] != t[i]) k = pre[k];
        if (s[k+1] == t[i]) ++k;
        if (s[k+1] == 0){
            cout << i - k + 1 << " ";
            k = pre[k];
        } 
    }*/
    for (auto &item:pre) cout << item << " ";
    return 0;
}