#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b){
    if (b == 0) return a;
    return UCLN(b,a%b);
}

void Process(int &check,int &a,int &b,int &c,int &d){
    cout << "\n";
    if (check == 0){
        int temp = UCLN((a*d + b*c),b*d);
        cout << "Tong: "<< (a*d + b*c)/temp << " " << b*d/temp;
    }else if(check == 1){
        int temp = UCLN((a*d - b*c),b*d);
        cout << "Hieu: " << (a*d - b*c)/temp << " " << b*d/temp;
    }else if (check == 2){
        int temp = UCLN(a*c,b*d);
        cout << "Tich : " << a*c/temp << " " << b*d/temp;
    }else {
        int temp = UCLN(a*d,b*c);
        cout << "Thuong : " << a*d/temp << " " << b*c/temp;
    }
}


int main(){
    int a,b,c,d;
    cin >> a >>b >> c >>d;
    if (a < 0 || c < 0 || d <= 0 || b <= 0) return 0;
    a /= UCLN(a,b);
    b /= UCLN(a,b);
    c /= UCLN(c,d);
    d /= UCLN(c,d);
    for (int i = 0;i<4;i++)Process(i,a,b,c,d);
    return 0;
}