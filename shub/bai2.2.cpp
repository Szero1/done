#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count = 0,S = 0;
    cin >> n;
    cout << n << " = 1";
    for (int i = 1;i<=n;++i){
        if (n % i == 0){
            count++;
            S += i;
        }
    }
    for (int i = 2;n != 1;++i)
        for (;n%i==0;n/=i) cout << "*" << i;
    cout << "\n" << count;
    cout << "\n" << S;
    return 0;
}