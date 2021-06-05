#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    vector<bool> isprime(max(m,n)+1,true);
    isprime[0] = isprime[1] = false;
    set<int> A,B;
    for (int i = 2;i*i<=isprime.size();++i){
        if (isprime[i]) for (int j = i*i; j<= isprime.size();j+=i) isprime[j] = false;
    }
    for (int i = 2;i < isprime.size();++i){
        if (isprime[i]){
            for (;n%i == 0;n/= i) A.insert(i);
            for (;m%i == 0;m/=i) B.insert(i);
        }
        if (n == 1 && m == 1)break;
    }
    if (A == B) cout << "YES";
    else cout << "NO";
    return 0;
}