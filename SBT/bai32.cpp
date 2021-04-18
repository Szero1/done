#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    cin >> a[0] >> a[1];
    for (int i=2;i<n;i++) a[i] = a[i-2] + (i%2==0? a[0]:a[1]);
    cout << a[n-1];
    return 0;
}