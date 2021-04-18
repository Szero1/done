#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cin >> n;
    cout << "Tong binh phuong cac chu so cua " << n << " la: ";
    while(n/10 != 0){
        int temp = n % 10;
        s += temp*temp;
        n/=10;
    }
    cout << s+n*n;
    return 0;
}