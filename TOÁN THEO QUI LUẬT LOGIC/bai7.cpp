#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count5 = 0;
    cin >> n;
    if (n <= 0) return 0;
    while(n / 5 != 0){
        count5 += n / 5;
        n /= 5;
    }
    cout <<count5;
    return 0;
}