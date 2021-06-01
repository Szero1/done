#include <bits/stdc++.h>
using namespace std;
int main(){
    int l[3],h[3],w[3],ltemp,wtemp;
    for (int i = 0;i<3;++i){
        cin >> l[i] >> w[i] >> h[i];
        if (l[i] > 1000 || h[i] > 1000 || w[i] > 1000) return 0;
    }
    if (h[1] > h[2] || h[0] > h[2] || l[0]*w[0] + l[1]*w[1] > l[2]*w[2]) goto NO;
    
    ltemp = l[0] + l[1];
    wtemp = max(w[0],w[1]);
    if ((ltemp <= l[2] && wtemp <= w[2]) || (ltemp <= w[2] && wtemp <= l[2])) goto YES;
    ltemp = max(l[0],l[1]);
    wtemp = w[0] + w[1];
    if ((ltemp <= l[2] && wtemp <= w[2]) || (ltemp <= w[2] && wtemp <= l[2])) goto YES;

    ltemp = w[0] + l[1];
    wtemp = max(l[0],w[1]);
    if ((ltemp <= l[2] && wtemp <= w[2]) || (ltemp <= w[2] && wtemp <= l[2])) goto YES;
    ltemp = max(w[0],l[1]);
    wtemp = l[0] + w[1];
    if ((ltemp <= l[2] && wtemp <= w[2]) || (ltemp <= w[2] && wtemp <= l[2])) goto YES;

    NO:
        cout << "NO";
        return 0;

    YES:
        cout << "YES";
        return 0;
}