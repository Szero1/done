#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count5 = 0;
    cin >> n;
    if (n <= 0) return 0;
    for (int i = 5;i <= n;i += 5)
        count5 += int(log(i)/log(5)); 
    cout <<count5;
    return 0;
}