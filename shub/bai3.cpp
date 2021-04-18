#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    if (n <= 3) return n > 1;
    else if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i*i <=n;i+= 6) if (n % i == 0|| n %(i+2) == 0) return false;
    return true;
}

bool is_SuperPrime(int n){
    for (;n>0;n/=10) if (!is_prime(n)) return false;
    return true;
}

int main(){
    int m;
    cin >> m;
    for (int i = m;i>1;--i)
        if (is_SuperPrime(i)){
            cout << i;
            break;
        }
    while(!is_SuperPrime(m))++m;
    cout << endl << m;
    return 0;
}