#include<bits/stdc++.h>
using namespace std;
int main(){
    int Xa,Yb;
    cin >> Xa >> Yb;
    if (Xa > 0 && Yb > 0) cout << "A va B Cung thuoc goc phan tu thu I";
    else if (Xa > 0 && Yb < 0) cout << "A va B Cung thuoc goc phan tu thu IV";
    else if (Xa < 0 && Yb < 0) cout << "A va B Cung thuoc goc phan tu thu III";
    else cout << "A va B Cung thuoc goc phan tu thu II";
    return 0;
}