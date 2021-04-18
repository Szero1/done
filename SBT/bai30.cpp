#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    cout << int(log10(n)/log10(3)) + 1;
    return 0;
}