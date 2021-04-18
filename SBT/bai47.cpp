#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,r1,r2,s;
    cin >> a >> r1 >> r2 >>s;
    if (a != 0) cout << a << " " << a*sqrt(3)/6 << " " << a/(sqrt(3))<< " " << a*a*sqrt(3)/4;
    else if (r1 != 0) cout << sqrt(3) * 6 * r1 << " "<<r1 << " " << 6 * r1 << " " << r1*1.5*sqrt(3) * 6 * r1;
    else if (r2 != 0) cout << sqrt(3) *r2 << " "<<sqrt(9) *r2/6 << " " << r2 << " "<< 2.25*r2*r2*sqrt(3);
    else cout << sqrt(4*s/sqrt(3)) << " " << s/sqrt(4*s/sqrt(3))<< " " << sqrt(s*4/(3*sqrt(3))) << " " << s;
    return 0;
}