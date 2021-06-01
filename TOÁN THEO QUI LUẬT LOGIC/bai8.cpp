#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, count = 0;
    cin >> a;
    string sa,sb;
    while( a != 0 && a != 6174){
        sb = sa = to_string(a);
        sort(sa.begin(),sa.end());
        sort(sb.rbegin(),sb.rend());
        a = stoi(sb) - stoi(sa);
        ++count;
    }
    cout << count;
    return 0;
}