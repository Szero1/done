#include <iostream>
using namespace std;

int main(){
    int p,q,r;
    cin >> p>>q>>r;
    if ((double(q)/double(p) == double(r)/double(q))) cout << "YES";
    else cout << "NO"; 
    return 0;
}