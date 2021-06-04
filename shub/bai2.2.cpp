#include <bits/stdc++.h>
using namespace std;

bool is_prime(int &n){
    if (n <= 3) return n > 1;
    else if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i*i <=n;i+= 6) if (n % i == 0|| n %(i+2) == 0) return false;
    return true;
}

int main(){
    int n, uoc = 1;
    long long int s = 1;
    cin >> n;
    vector<pair<int,int>> pt;
    cout << n << " = 1";
    if (is_prime(n)){
        cout << "*" << n;
        cout << "\nSo uoc: 2";
        cout << "\nTong cac uoc:" << n +1;
    }else{
        for (int i = 2;i<= n;++i){
            if (is_prime(i) & n % i == 0){
                pair<int,int> u = make_pair(0,i);
                for (;n % i == 0; n/=i) u.first++;
                pt.push_back(u);
                uoc *= (u.first + 1);
                s *= ((pow(i,u.first + 1)-1)/(i-1));
            }
        }
        for (auto item:pt) for (;item.first>0;--item.first) cout << "*" << item.second; 
        cout << "\nSo uoc: " << uoc;
        cout << "\nTong cac uoc: " << s;
    }
    return 0;
}