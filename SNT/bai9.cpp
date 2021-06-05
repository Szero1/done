#include <bits/stdc++.h>
using namespace std;

bool is_prime(int &n){
    if (n <= 3) return n > 1;
    else if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i*i <=n;i+= 6) if (n % i == 0|| n %(i+2) == 0) return false;
    return true;
}

int main(){
    int n,temp = 0;
    cin >> n;
    if (!is_prime(n)){
        cout << "Khong la so nguyen to";
        return 0;
    }
    for (int j = n - 2;j>= 2;j-=2) if (is_prime(j)){
        temp += j;
        break;
    }
    for (int j = n + 2;;j+= 2) if (is_prime(j)){
        temp += j;
        break;
    }
    if ((temp / 2) <= n) cout << "La so nguyen to manh";
    else cout << "Khong la so nguyen to manh";
    return 0;
}