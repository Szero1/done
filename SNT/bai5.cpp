#include <bits/stdc++.h>
using namespace std;

int check(int a){
    int S = 0;
    for (int i = 1; i <= a/2;++i) if (a % i == 0) S+= i;
    return S;
}

int main(){
    for (int i = 2; i < 10000;i+= 2){       
        int temp = check(i);
        if (check(temp) == i) cout << i << " " << temp << "\n";
    }   
    return 0;
}