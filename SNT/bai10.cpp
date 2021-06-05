#include<bits/stdc++.h>
using namespace std;

bool is_prime(const int &n){
    if (n <= 3) return n > 1;
    else if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i*i <=n;i+= 6) if (n % i == 0|| n %(i+2) == 0) return false;
    return true;
}

int MakeFi(const int &n){
    return ((double)1 / sqrt(5) * (pow((1 + sqrt(5)),n) - pow(1 - sqrt(5),n)) / pow(2,n));
}

int main(){
    int M,temp = 0;
    //cin >> M;
    M = 1999999999;
    vector<bool> SNT(47,true);
    SNT[0] = SNT[1] = SNT[2] = false;
    for (int i = 3;i*i<=46;++i) if (SNT[i]) for (int j = i*i;j <= 46;j+= i) SNT[j] = false;
    SNT[4] = true;
    for (int i = 2,k = 0;i<=46;++i) if (SNT[i]){
        k = MakeFi(i);
        if (k >= M) break;
        if (is_prime(k) && k < M)  temp = k;
    }
    cout << temp;
    return 0;
}