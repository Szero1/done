#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,u,v;
    cin >> x >>y>>u >>v;
    if ((x*u < 0) || (y*v < 0)) cout << "Hai Diem khong cung thuoc goc phan tu";
    else cout << "Hai diem cung thuoc 1 goc phan tu";
    return 0;
}