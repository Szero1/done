#include <bits/stdc++.h>
using namespace std;

bool is_prime(const int &n){
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5;i*i<=n;i+= 6) if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> A;
    for (int i = 0,k;i < n;++i){
        cin >> k;
        if (is_prime(k)) A.push_back(k);
    }
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(),A.end()),A.end());
    n = 0;
    for (int i = 0; i < A.size() - 1 ;++i){
        if (A[i+1] - A[i] == 2) ++n;
    }
    cout << n;
    return 0;
}