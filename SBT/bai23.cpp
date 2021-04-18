#include <iostream>
using namespace std;

int main(){
    int a,d,b;
    cin >> a>>d>>b;
    cout << ((b-a)%d == 0 ? (b-a+d)/d: (b-a+d)/d+1);
    return 0;
}