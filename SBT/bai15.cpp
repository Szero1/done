#include <iostream>
using namespace std;
int main(){
    int x,y,z,t,k;
    cin >> x >> y >> z >> t;
    x,y = ((x*x + y*y <= z*z + t*t) ? (z,t):(x,y));
    cout << x << " " << y;
    return 0;
}