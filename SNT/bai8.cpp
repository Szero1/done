#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b){
    if (b == 0) return a;
    return UCLN(b,a % b);
}

int convert(int a){
    return ((a % 10) * 10 + a / 10);
}

int main(){
    vector<bool> check(87,false);
    for (int i = 0;i<87;++i){
        if (check[i] == false) if (UCLN(i+12,convert(i+12)) == 1) check[i] = check[convert(i+12) - 12] = true;
    }
    for (int i = 0;i<87;++i) if (check[i]) cout << i + 12 << " ";
    return 0;
}