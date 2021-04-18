#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,S = 0,count = 0;
    cin >> n;
    cout << n << " = ";
    vector<int> pt;
    for (int i = 2;i<=n;++i){
        while(n % i == 0){
            S += i;
            count += 1;
            n /= i;
            pt.push_back(i);
        }
    }
    if (count == 0) cout << n;
    else{for (int i = 0; i< count -1;++i) cout << pt[i] << "*";
    cout << pt[count-1];}
    cout << "\nSo uoc: " << count;
    cout << "\nTong cac uoc: S = " << S;
    return 0;
}