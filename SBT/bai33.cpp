#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    if (t%2 == 0) cout << "(" << (1+t)*cos(90*t*M_PI/180)<<";0)";
    else cout << "(0;" << (1+t)*sin(90*t*M_PI/180)<<")";
    return 0;
}