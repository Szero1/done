#include <bits/stdc++.h>
using namespace std;
int main(){
    int p,q,r;
    cin >> p>>q>>r;
    if (p > q && p > r) cout << "AN";
    else if (q > p && q > r) cout << "VINH";
    else if (r > q && r > p) cout << "QUANG";
    else cout << "BAU LAI";
    return 0;
}