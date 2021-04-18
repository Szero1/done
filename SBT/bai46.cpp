#include<bits/stdc++.h>
using namespace std;
int main(){
    float R,D,L,S;
    cin >> R >> D>> L>> S;
    cout << fixed << setprecision(2);
    if (R != 0)cout <<R<< " " <<2*R<<" "<<M_PI*2*R<< " " <<M_PI*R*R;
    else if(D!= 0) cout <<D/2<<" "<<D<<" "<<D*M_PI<<" "<<M_PI*D*D/4;
    else if(L!= 0) cout <<L/M_PI/2<<" "<<L/M_PI<<" "<<L<<" "<<L*L/4/M_PI;
    else cout << sqrt(S/M_PI) << " " << sqrt(S/M_PI)*2<<" " << S*2/sqrt(S/M_PI)<<" "<<S;
    return 0;
}