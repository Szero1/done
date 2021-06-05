#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,temp = 0;
    cin >> n >> k;
    vector<bool> isPrime(k,true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2;i*i<k;++i) if (isPrime[i]) for (int j = i*i;j<k;j+=i) isPrime[j] = false;
    for (int i = 0,t;i < n;++i){
        cin >> t;
        if (t < k && isPrime[t]) ++temp; 
    }
    cout << temp;
    return 0;
}